## 16x2, 20x4 etc... LCD Tutorial
In this folder you can find the correct library for I2C LCD's, it works with many types of LCD's, like 16x2, 16x4, 20x4, 20x2 etc... Just write the correct column and row number in the code!
Example for 16x2:
`LiquidCrystal_I2C lcd(0x3F,16,2);`
Example for 20x4:
`LiquidCrystal_I2C lcd(0x3F,20,4);`

Now if you are done with this, you need to find out the LCD's address. It's very easy! First, plug your LCD correctly to your Arduino, here's how:

Arduino        | SDA           | SCL           |
:------------- | ------------- | ------------- |
UNO/Nano       | A4            | A5            |
Mega           | Pin 20        | Pin 21        |


