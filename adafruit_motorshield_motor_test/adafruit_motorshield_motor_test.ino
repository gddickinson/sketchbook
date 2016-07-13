#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_PWMServoDriver.h"

Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
Adafruit_DCMotor *myMotor1 = AFMS.getMotor(1);

void setup() {
  AFMS.begin();
  myMotor1->setSpeed(150); 
}

void loop() {
  myMotor1->run(FORWARD);
  //delay(10);
  myMotor1->run(BACKWARD);
  //delay(10);
  

}
