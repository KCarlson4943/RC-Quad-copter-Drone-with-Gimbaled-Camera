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
