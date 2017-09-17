//////////////////////////////////
// Example Code for:
// LiquidCrystalDisplay (LCD) 16x2 with I2C driver
// by Stephen Miller
// http://www.github.com/stephenmiller04/SUArduinoCollection
// Last modification: 2017.09.18 00:47
//////////////////////////////////

#include <LiquidCrystal_I2C.h> //Start writing the code by including the LCD's library
//Setting up your LCD
//First, connect your LCD to the correct pins
//Arduino UNO/NANO: Connect SDA to A4, SCL to A5
//Arduino MEGA: Connect SDA to Pin20, SCL to Pin21
LiquidCrystal_I2C lcd(0x3F,16,2); //LiquidCrystal_I2C yourlcdname(Address,columns_number,rows_number);
//Run the included I2C scanner code to find out the Address
//The default address on Robotdyn UNO R3/NANO is 0x3F

void setup() {
  lcd.init(); //Initialize your LCD
  lcd.backlight(); //Turn your backlight on
}

void loop() {
  //Now we want to write 'Hello' and 'World' in two different rows
  //starting in the first column and in the first row
  lcd.setCursor(0,0); //(column,row)
  lcd.print("Hello"); //printing the given text
  lcd.setCursor(0,1); //placing the cursor to the next row
  lcd.print("World"); //and the text will be written on the second row
  delay(3000); //Without this the screen is going to flicker
  //because we are in the loop section of the code
  //and if we don't put a delay here, the program will continously
  //print the given text to the screen.
  lcd.clear(); //With this command you can clear the whole display
}
