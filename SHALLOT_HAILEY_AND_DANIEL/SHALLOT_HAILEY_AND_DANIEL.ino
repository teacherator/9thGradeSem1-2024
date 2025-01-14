#include <Wire.h>
#include <LiquidCrystal_I2C.h>
long dieroll;
// LiquidCrystal_


LiquidCrystal_I2C lcd(0x27,20,4);
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

/*
void scrollText(String msg) {
  int msgLength = msg.length();

  for (int pos = 0; pos < msgLength + 16; pos++) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(msg.substring(pos, pos +16));
    delay(300);
  }
}


String message = "Hello, Arduino!";

*/

void setup() {
  // put your setup code here, to run once:
lcd.init();
lcd.begin(16,2);



}

void loop() {
  // put your main code here, to run repeatedly:
  randomSeed(analogRead(0));
  dieroll=random(1,6);

  lcd.backlight();
  lcd.setCursor(1,0);
   lcd.scrollDisplayLeft();
  delay(150);
  lcd.print (dieroll);
  delay(3000);
  lcd.clear();
  delay(3000);
  lcd.print("charlotte ness");
  delay(3000);
  lcd.clear();
  delay(3000);
  lcd.print("daniel sultan");
 delay(3000);
 lcd.clear();
  delay(150);
  

}

/*

void    scrollText(message);
    delay(500);
}
   // void scrollText(String msg) {
     // int msgLength=msg.length();
      //for(int pos =0; pos < msgLength+16; pos++) {
        //lcd.clear();
        //lcd.setCursor(0,0);
       // lcd.print(msg.substring(pos,pos+16));
        //delay(300);
      }

      */
