/*
  Melody

  Plays a melody

  circuit:
  - 8 ohm speaker on digital pin 8

  created 21 Jan 2010
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Tone
*/

#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_C4,NOTE_D4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_A4,NOTE_B4,NOTE_G3,NOTE_B3,NOTE_A3,NOTE_E3
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 1; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    
    tone(8, 532, 500);
    delay(300);
    tone(8,587, 500);
    delay(300);
     tone(8,659, 500);
    delay(300);
     tone(8,392, 500);
    delay(300);
     tone(8,532, 500);
    delay(300);
     tone(8,659, 400);
    delay(350);
    tone(8,659, 500);
    delay(500);
    tone(8, 587, 500);
    delay(300);
    tone(8,532, 500);
    delay(300);
     tone(8,587, 500);
    delay(300);
     tone(8,784, 400);
    delay(350);
     tone(8,784, 400);
    delay(350);
     tone(8,784, 400);
    delay(350);
    tone(8,784, 400);
    delay(500);
    tone(8,532, 500);
    delay(300);
     tone(8,494, 500);
    delay(300);
     tone(8,532, 400);
    delay(350);
     tone(8,532, 400);
    delay(350);
     tone(8,532, 400);
    delay(350);
    tone(8,532, 400);
    delay(350);
     tone(8,532, 500);
    delay(300);
    tone(8,494, 500);
    delay(300);
    tone(8,532, 500);
    delay(300);
    tone(8,494, 500);
    delay(300);
    tone(8,532, 500);
    delay(300);
    tone(8,494, 500);
    delay(300);
     tone(8,440, 500);
    delay(300);
     tone(8,392, 500);
    delay(300);
     tone(8,392, 500);
    delay(300); 
    tone(8,392, 500);
    delay(300);
     tone(8,440, 500);
    delay(300);
     tone(8,440, 500);
    delay(300);
     tone(8,440, 500);
    delay(300);
     tone(8,440, 500);
    delay(300);
     tone(8,440, 500);
    delay(300);
    tone(8,392, 500);
    delay(300); 
     tone(8,392, 500);
    delay(300); 
    tone(8,392, 500);
    delay(300); 
     tone(8,330, 500);
    delay(300); 
     tone(8,392, 500);
    delay(300); 
      tone(8,587, 500);
    delay(300); 
      tone(8,523, 500);
    delay(300); 
     tone(8,392, 500);
    delay(300); 
     tone(8,330, 500);
    delay(300); 
         tone(8,330, 500);
    delay(300); 
         tone(8,330, 500);
    delay(300); 
    tone(8,349, 500);
    delay(300); 
    tone(8,784, 500);
    delay(300);
    tone(8,523, 500);
    delay(300); 
     tone(8,523, 500);
    delay(300); 
     
     tone(8,587, 500);
    delay(100); 
     tone(8,659, 500);
    delay(300); 
    tone(8,587, 500);
    delay(300); 
    // stop the tone playing:
    noTone(8);
  }
}

void loop() {
 
  
  
  // no need to repeat the melody.
}
