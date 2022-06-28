/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/home/maxwell/CTD-IoT/d2/labbier1/src/labbier1.ino"


void customColorBlink(int red, int green, int blue, int delayy);
void doBlinkyThings(float delay);
void setup();
void loop();
#line 3 "/home/maxwell/CTD-IoT/d2/labbier1/src/labbier1.ino"
SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(AUTOMATIC);
int RED = D7;
int GREEN = D6;
int BLUE = D5;

void customColorBlink(int red, int green, int blue, int delayy) {
  for (int i = 0; i < 510; i++) {
      int temp = i;
      if (temp > 255) {
        temp = 510 - temp;
      }
      analogWrite(RED, map(temp, 0, 255, 0, red));
      analogWrite(GREEN, map(temp, 0, 255, 0, green));
      analogWrite(D5, map(temp, 0, 255, 0, blue));
      delayMicroseconds((int) (delayy * 1000));
  }
}
void doBlinkyThings(float delay) {
  customColorBlink(255, 255, 0, delay);
  customColorBlink(0, 255, 0, delay);
  customColorBlink(0, 255, 255, delay);
  customColorBlink(0, 0, 255, delay);
  customColorBlink(255, 0, 255, delay);
  customColorBlink(255, 255, 255, delay);
  customColorBlink(255, 111, 97, delay);
  customColorBlink(97, 255, 255, delay);
}

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D5, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  // for (int i = 0; i < 2; i++) {
  //   doBlinkyThings(1);
  // }
  // for (int i = 0; i < 3; i++) {
  //   doBlinkyThings(0.2);
  // }
  doBlinkyThings(5);
}