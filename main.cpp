#include keyboard.h


const int buttonPin = 2;  // Button connected to pin 2

void setup() {

 pinMode(buttonPin, INPUT_PULLUP); // Set pin as input with internal pull-up resistor
  Keyboard.begin();  
}

void loop() {
  // this reapets until the program endsggvbvbggggbggffffv vggbjoojgcxsqaaaz


  if (digitalRead(buttonPin) == LOW) {
//mchecks if the voltage is high
     Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('v');
delay(7000)
      Keyboard.releaseAll();

while(digitalread(buttonPin) == LOW) {
}
  }
    }


