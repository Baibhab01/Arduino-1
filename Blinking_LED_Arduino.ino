void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH); //turn on the LED at pin-13
delay(500);            //delay for 500milllisec
digitalWrite(13,LOW);  //turn off the LED at pin-13
delay(500);            //delay for 500millisec
}
