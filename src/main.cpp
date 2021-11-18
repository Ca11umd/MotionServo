#include <Arduino.h>

#include <Servo.h>
Servo myservo;

void setup(){
  myservo.attach(9);
  myservo.write(90);// move servos to center position -> 90°
  Serial.begin(9600);
} 
void loop(){
  Serial.write("Starting\n");
  myservo.write(90);// move servos to center position -> 90°
  delay(1000);
  myservo.write(30);// move servos to center position -> 60°
  delay(1000);
  myservo.write(90);// move servos to center position -> 90°
  delay(1000);
  myservo.write(150);// move servos to center position -> 120°
  delay(1000);
}