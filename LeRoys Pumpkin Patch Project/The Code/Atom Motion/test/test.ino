#include "src/M5Atom/M5Atom.h"
#include "AtomMotion.h"

AtomMotion Atom;

//servo angle range 0 ~ 180
//DC motor speed range -127~127



void setup(){ 
Serial.begin(115200);
  
  M5.begin(true, true, true);
  Atom.Init();     //sda  25     scl  21 
  
  
}

void loop() {
    for (int a = 0; a <=180; a++) {
      Atom.SetServoAngle(1, a);
      Atom.SetServoAngle(2, 180-a);
      Atom.SetServoAngle(3, a);
      Atom.SetServoAngle(4, 180-a);
      delay(10);
    }

    for (int a= 180; a>= 0; a--) {
      Atom.SetServoAngle(1, a);
      Atom.SetServoAngle(2, 180-a);
      Atom.SetServoAngle(3, a);
      Atom.SetServoAngle(4, 180-a);
      delay(10);
    }
}
