#include <Keyboard.h>

#include <Keyboard.h>


int pins[] = {0, 1, 2};
char keys[] = {'a', 'b', 'c'};

void setup() {

  Keyboard.begin();
  Serial.begin(9600);
 
}

void addKey(int pin, char key){
  
  while(digitalRead(pin) == HIGH){
    Keyboard.press(key);
    }
  Keyboard.release(key);
  }



void loop() {
  for (int i = 0; i < sizeof(pins); i++){
    
    addKey(pins[i], keys[i]);
    
    }

}
