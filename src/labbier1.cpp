/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/home/maxwell/CTD-IoT/d2/labbier1/src/labbier1.ino"


void doBlinkyThing(int pin, float delayy);
void doDualBlinkyThing(int pin1, int pin2, float delayy);
void doWhiteBlinkyThing(float delayy);
void doBlinkyThings(float delay);
void setup();
void loop();
#line 3 "/home/maxwell/CTD-IoT/d2/labbier1/src/labbier1.ino"
SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(AUTOMATIC);

void doBlinkyThing(int pin, float delayy) {
  for (int i = 0; i < 510; i++) {
    int temp = i;
    if (temp > 255) {
      temp = 510 - temp;
    }
    analogWrite(pin, temp);
    delayMicroseconds((int) (delayy * 1000));
  }
}
void doDualBlinkyThing(int pin1, int pin2, float delayy) {
  for (int i = 0; i < 510; i++) {
    int temp = i;
    if (temp > 255) {
      temp = 510 - temp;
    }
    analogWrite(pin1, temp);
    analogWrite(pin2, temp);
    delayMicroseconds((int) (delayy * 1000));
  }
}
void doWhiteBlinkyThing(float delayy) {
  for (int i = 0; i < 510; i++) {
    int temp = i;
    if (temp > 255) {
      temp = 510 - temp;
    }
    analogWrite(D7, temp);
    analogWrite(D6, temp);
    analogWrite(D5, temp);
    delayMicroseconds((int) (delayy * 1000));
  }
}
void doBlinkyThings(float delay) {
  doBlinkyThing(D7, delay);
  doDualBlinkyThing(D7, D6, delay);
  doBlinkyThing(D6, delay);
  doDualBlinkyThing(D6, D5, delay);
  doBlinkyThing(D5, delay);
  doDualBlinkyThing(D5, D7, delay);
  doWhiteBlinkyThing(delay);
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
  doBlinkyThings(5);
  // for (int i = 0; i < 2; i++) {
  //   doBlinkyThings(1);
  // }
  // for (int i = 0; i < 3; i++) {
  //   doBlinkyThings(0.2);
  // }
}