//For UNO and MEGA Boards

uint8_t buf[8] = { 0 }; //Keyboard report buffer


void setup() {

Serial.begin(9600); // Setup Serial communication

//Set pinmode of Input pins

pinMode(0, INPUT);

pinMode(1, INPUT);

pinMode(2, INPUT);

pinMode(3, INPUT);

}

void loop() {

//When button representing W is pressed

if (digitalRead(0) == HIGH) {

buf[2] = 26; // W keycode

Serial.write(buf, 8); // Send keypress

releaseKey();

}

//When button representing A is pressed

if (digitalRead(1) == HIGH) { buf[2] = 4; // A keycode

Serial.write(buf, 8); // Send keypress

releaseKey();

}

//When button representing S is pressed

if (digitalRead(2) == HIGH) { buf[2] = 22; // S keycode

Serial.write(buf, 8); // Send keypress

releaseKey();

}

//When button representing D is pressed

if (digitalRead(3) == HIGH) { buf[2] = 7; // D keycode

Serial.write(buf, 8); // Send keypress

releaseKey();

}

}

// Function for Key Release

void releaseKey() {

buf[0] = 0; //reset modifier buffer

buf[2] = 0; //reset key buffer

Serial.write(buf, 8); // Send Release key

}
