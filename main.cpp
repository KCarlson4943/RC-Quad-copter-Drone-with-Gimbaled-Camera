#include <Servo.h> // Arduino headers use angle brackets and are case-sensitive
Servo myservo;     // You must declare your servo object before using it
const int potPin = A0; //connects the potentiomerer to anolog pin 0
int potValue;
int angle;


void setup() { 
  myservo.attach(9); // Connects the servo pin to digital pin 9
  
  myservo.write(90); // This sets the servo to its midpoint (90 degrees)
  delay(500);        

void loop() {
// Setup runs only once. Code that repeats goes here.
}
#include <servo.h>

Servo myServo;

Servo(angle >10(angle>170))


void loop() {
if analogRead(potPin) > 1000)){ //can be between 0-1023
  myServo.write(135);
  delay(6000);
}
  
else() {
myServo.write(45); // numbers >90 go one way and <90 go oposite.
delay(6000);
}
}

  


