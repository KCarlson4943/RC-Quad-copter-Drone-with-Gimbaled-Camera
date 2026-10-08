#include keyboard.h


const int buttonPin = 2;  // Button connected to pin 2

void setup() {

 pinMode(buttonPin, INPUT_PULLUP); // Set pin as input with internal pull-up resistor
  Keyboard.begin();  
}

void loop() {
  // this reapets until the program ends


  if (digitalRead(buttonPin) == LOW) {
//checks if the voltage is high
     Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('v');
delay(7000)
      Keyboard.releaseAll();

while(digitalread(buttonPin) == LOW) {
}
  }
    }











//basic IF loop for arduino

const int BUTTON_PIN = 12;
const int LED_PIN = 13;

void setup(){

pinMode(BUTTON_PIN, input);

pinMode(LED_PIN, output);

}
if(digitalread(buttonPin) == high){
digitalWrite(LED_PIN, high); //high means on
 
}
 
 else{
  
  digitalWrite(LED_PIN, low); //low means off
 delay(7000)
}


