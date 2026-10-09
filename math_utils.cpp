#include <Servo.h> // Arduino headers use angle brackets and are case-sensitive

Servo myservo;     // You must declare your servo object before using it

void setup() { 
  myservo.attach(9); // Connects the servo pin to digital pin 9
  
  myservo.write(90); // This sets the servo to its midpoint (90 degrees)
  delay(500);        // Added missing semicolon
}

void loop() {
// Setup runs only once. Code that repeats goes here.
}
#include <servo.h>

Servo myServo;


void setup() { //goes when I hit resart
myServo.attach(9);
}

Servo(angle >10(angle>170))


void loop() {
myServo.write(45); // numbers >90 go one way and <90 go oposite.
delay(7000);
  

myServo.write(90);
  servo(90) ;//spin 90 degrees
delay(2000);
