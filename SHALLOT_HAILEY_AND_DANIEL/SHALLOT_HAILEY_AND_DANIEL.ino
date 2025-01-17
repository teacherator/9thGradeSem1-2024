#include <Wire.h>
#include <LiquidCrystal_I2C.h>
long dieroll;
// LiquidCrystal_


LiquidCrystal_I2C lcd(0x27,20,4);
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 8;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status


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
// initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  lcd.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);

 // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == LOW) {
    // turn LED on:
     // put your main code here, to run repeatedly:
  randomSeed(analogRead(0));
  dieroll=random(1,7);


  lcd.clear();
  lcd.setCursor(1,0);
   lcd.scrollDisplayLeft();
  delay(150);

  for (int i = 0; i < dieroll; i++) {
  lcd.print (dieroll);
  lcd.print(" ");
  }
  
  delay(1500);
  lcd.clear();
  } else {
    // turn LED off:
    lcd.print("push to roll  ");
  //delay(3000);
  //lcd.clear();
  
  }
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
