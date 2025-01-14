void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(5,HIGH);
delay(350);
digitalWrite(4,HIGH);
delay(350);
digitalWrite(3,HIGH);
delay(350);
digitalWrite(5,LOW);
delay(350);
digitalWrite(4,LOW);
delay(350);
digitalWrite(3,LOW);
delay(350);
}
