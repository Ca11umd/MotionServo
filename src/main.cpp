#include <Arduino.h>
#include <Servo.h>

int ledPin = 13;
int pirPin = 8;
int pirValue; 
Servo MotionServo;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  digitalWrite(ledPin, LOW);
  MotionServo.attach(9);
  MotionServo.write(90);
}

void loop() {
  pirValue = digitalRead(pirPin);
  digitalWrite(ledPin,pirValue);

  if (pirValue == HIGH) {
    MotionServo.write(180);
  }
  else {
    MotionServo.write(90);
  } 
}

