## 16x2, 20x4 etc... LCD Tutorial
In this folder you can find the correct library and an example code for I2C LCD's, it works with many types of LCD's, like 16x2, 16x4, 20x4, 20x2 etc...

Put the `LiquidCrystal_I2C` folder (you can find it in the `libraries`) to your `Documents/Arduino/libraries`!

Now write the correct column and row number in the code!

Example for 16x2:
`LiquidCrystal_I2C lcd(0x3F,16,2);`

Example for 20x4:
`LiquidCrystal_I2C lcd(0x3F,20,4);`

Now if you are done with this, you need to find out the LCD's address. It's very easy! First, connect your LCD to your Arduino, here's how:

Arduino        | SDA           | SCL           |
:------------- | ------------- | ------------- |
UNO/Nano       | A4            | A5            |
Mega           | Pin 20        | Pin 21        |

Here's a circuit diagram for UNO:

![](https://raw.githubusercontent.com/stephenmiller04/SUArduinoCollection/master/Displays/LCD16x2_20x4/UNO_circuit_diagram.png)

And for Mega:

![](https://raw.githubusercontent.com/stephenmiller04/SUArduinoCollection/master/Displays/LCD16x2_20x4/MEGA_circuit_diagram.png)

Now open the I2C scanner, upload it to your arduino, and open up the serial monitor in the Arduino IDE, and it shows you the address!
```
I2C Scanner
Scanning...
I2C device found at address 0x3F  !
done
```

My address is `0x3F` and my LCD is 16x2 so my code look like this:
`LiquidCrystal_I2C lcd(0x3F,16,2);`

And that's it! Now you have a working LCD!

Stephen Miller © 2017 [www.stephenmiller.hu](http://www.stephenmiller.hu)