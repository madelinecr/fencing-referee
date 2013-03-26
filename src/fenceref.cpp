#if ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

// - Integer value for 3V, for reading an analog voltage
unsigned signal_3v = 610;

// # LED pins
unsigned const led_lhit = 0;
unsigned const led_rhit = 2;
unsigned const led_loff = 1;
unsigned const led_roff = 3;
unsigned const led_epee = 11;
unsigned const led_foil = 12;
unsigned const led_saber = 13;

unsigned const weapon_button = 8;

// # Signal pins
unsigned const lhigh = 9;
unsigned const rhigh = 10;
unsigned const lgnd = 5;
unsigned const rgnd = 6;

// # Analog measurement pins
unsigned const ltip = 0;
unsigned const rtip = 1;


void setup() {
  pinMode(led_lhit, OUTPUT);
  pinMode(led_rhit, OUTPUT);
  pinMode(led_loff, OUTPUT);
  pinMode(led_roff, OUTPUT);

  pinMode(led_epee, OUTPUT);
  pinMode(led_foil, OUTPUT);
  pinMode(led_saber, OUTPUT);

  pinMode(lhigh, OUTPUT);
  pinMode(rhigh, OUTPUT);
  pinMode(lgnd, OUTPUT);
  pinMode(rgnd, OUTPUT);
}

void loop() {
  analogWrite(lhigh, 100);

  unsigned const measurement = analogRead(ltip);
  if(measurement > signal_3v) {
    digitalWrite(led_lhit, HIGH);
    delay(500);
    digitalWrite(led_lhit, LOW);
  }
}
