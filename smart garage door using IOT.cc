#include <Stepper.h>
const int pingPin =2;
const int motor Pin = 13;
void setup() {
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
}
void loop() {
int duration, cm;

pinMode(pingPin, OUTPUT);
digitalWrite(pingPin, LOW);
delayMicroseconds(2);
digitalWrite(pingpin, HIGH);
delayMicroseconds(5);
digitalWrite(pingPin, LOW);

pinMode(pingPin, INPUT);
duration = pulseIn(pingPin, HIGH);

cm = microsecondsTo Centimeters(duratation);

Serial.print("Distance");
Serial.print(cm);
Serial.print("cm");
Serial.print();

if(cm < 329) {
  digitalWrite(motorPin, HIGH);
  delay(4000);
}
else{
digitalWrite(motorpin, HIGH);
}
digitalWrite(motorpin, LOW);
delay(1000);
}

long microseconds ToCentimeters(long microseconds){

return microseconds / 29 / 2;
}
