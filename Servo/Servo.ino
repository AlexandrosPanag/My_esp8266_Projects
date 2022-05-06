/*
 * Created by Alexandros Panagiotakopoulos
*/

#include <Servo.h>

Servo servo_1; // servo controller (multiple can exist)

int servo_pin = 4; // PWM pin for servo control
int pos = 0;    // servo starting position

void setup() {
  servo_1.attach(servo_pin); // start servo control
}

void loop() {
  int positioning;

  servo_1.write(180);
  delay(5000);
  servo_1.write(0);
  delay(5000);

  for(positioning = 0; positioning <= 180; positioning +=5){
    servo_1.write(positioning);
    delay(500);
    }
    for( positioning = 180; positioning >= 0; positioning -=5)
    {
      delay(500);
      }
}
