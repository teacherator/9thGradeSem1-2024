void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0, INPUT);
pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(analogRead(A0));
delay(100);
if((analogRead(A0))< 750){
  digitalWrite(4, HIGH);
}
else{
  digitalWrite(4, LOW);
}
}
