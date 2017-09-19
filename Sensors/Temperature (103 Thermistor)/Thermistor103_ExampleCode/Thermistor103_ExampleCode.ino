//////////////////////////////////
// Example Code for:
// 103 Thermistor (10k and 100k versions)
// by Stephen Miller & circuitbasics.com
// http://www.github.com/stephenMiller04/SUArduinoCollection
// Last modification: 2017.09.19 14:30
//////////////////////////////////

//Variables to compute the thermistor's temperature.
int Vo;
float R1 = 10000;
float logR2, R2, T;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;

void setup() {
  //We are going to display the temp in the serial console.
  //Or if you mastered the LCD tutorial, you can display it on your LCD :)
  Serial.begin(9600);
}

void loop() {
  //With this lines, we convert the raw 0-1024 numbers we get from the thermistor, to Celius or Fahrenheit
  Vo = analogRead(A0);
  //In this tutorial I connected the Thermistor to the Analog Pin 0
  //You can change it, but make sure you use the Thermistor in Analog pins!
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  T = T - 273.15;
  //T = (T * 9.0)/ 5.0 + 32.0; //Remove the comment from here if you want the temperature in Fahrenheit

  Serial.print("Current temperature: ");
  Serial.print(T); //"T" is the final temperature variable, we need to display this to the console/LCD
  Serial.println("°C");
  //Serial.println("°F"); //comment out the upper Celsius line if you use Fahrenheit
  delay(2000);
}
