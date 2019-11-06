#include "MinimalIcon.h"
#include <LedControl.h>
#include <avr/pgmspace.h>

MinimalIcon icon = MinimalIcon::MinimalIcon();
LedControl lc = LedControl(10,9,8,4);

void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(12, INPUT);
  digitalWrite(11, HIGH);
  for (int x=0; x<4; x++){
      lc.shutdown(x,false);       //The MAX72XX is in power-saving mode on startup
      lc.setIntensity(x,8);       // Set the brightness to default value
      lc.clearDisplay(x);         // and clear the display
  }
}

void loop() {
    for(int i = 0; i<8 ; i++){
        lc.setRow(0,i,icon.Quaver[i]);
        lc.setRow(1,i,icon.Demisemiquaver[i]);
        lc.setRow(2,i,icon.DoubleQuaver[i]);
        lc.setRow(3,i,icon.Demisemiquaver[i]);
    }
    /*
    lc.setRow(0,0,icon.BigHeart[0]);
    lc.setRow(0,1,icon.BigHeart[1]);
    lc.setRow(0,2,icon.BigHeart[2]);
    lc.setRow(0,3,icon.BigHeart[3]);
    lc.setRow(0,4,icon.BigHeart[4]);
    lc.setRow(0,5,icon.BigHeart[5]);
    lc.setRow(0,6,icon.BigHeart[6]);
    lc.setRow(0,7,icon.BigHeart[7]);
    */
}
