#if ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

unsigned int led_lhit = 0;
unsigned int led_rhit = 2;
unsigned int led_loff = 1;
unsigned int led_roff = 3;
unsigned int led_epee = 11;
unsigned int led_foil = 12;
unsigned int led_saber = 13;

unsigned int weapon_button = 8;

unsigned int lhigh = 9;
unsigned int rhigh = 10;
unsigned int lgnd = 5;
unsigned int rgnd = 6;


void setup() {
  pinMode(led_lhit, OUTPUT);
  pinMode(led_rhit, OUTPUT);
  pinMode(led_loff, OUTPUT);
  pinMode(led_roff, OUTPUT);

  pinMode(led_epee, OUTPUT);
  pinMode(led_foil, OUTPUT);
  pinMode(led_saber, OUTPUT);
}

void loop() {
}
