#include <Keyboard.h>

#include <Keyboard.h>


int pins[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
char keys[] = {'w', 'a', 's', 'd', 'j', 'k', 'l', 'p', 'g', 'h'};
int val[10];


void setup() {//

  Keyboard.begin();
  Serial.begin(9600);//
  
  //pinMode(pins[0], INPUT);
  //pinMode(pins[1], INPUT);
  //pinMode(pins[2], INPUT);
  pinMode(pins[3], INPUT);
 // pinMode(pins[4], INPUT);

  for(int i = 0; i < sizeof(pins); i++){
      val[i] = digitalRead(pins[i]);
    }

  
   //
}

void addKey(int pin){
int val = LOW;
if(pin == 3){val = HIGH;}
 if(digitalRead(pins[pin]) == val){
   Keyboard.press(keys[pin]);    
  } 
  else{  Keyboard.release(keys[pin]);    } 
}
  
  
  
  
  void loop() { 
    // for (int i = 0; i < sizeof(pins); i++){}       
    // addKey(pins[i], keys[i]);   /* if(digitalRead(5) == LOW){Keyboard.press('a');}
 
  //else{Keyboard.release('a');}
  
    //Serial.print(digitalRead(5)); 
/*jjjjjjjjjjjjjjjjjj
 addKey(0);
 addKey(1);
 addKey(2);*/
 addKey(3);
 //addKey(4);
 /*addKey(5);
 addKey(6);
 addKey(7);
 addKey(8);
 addKey(9);
 */

 
      Serial.print(digitalRead(pins[3]));
     // Serial.print(HIGH == 1);
      //Serial.print(digitalRead(pins[1]));
      //Serial.print(digitalRead(pins[2]));
      //Serial.print(digitalRead(pins[3]));
      //Serial.print(digitalRead(pins[4]));
   
    //


}
