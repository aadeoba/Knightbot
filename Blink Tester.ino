
#include <LedControl.h>

int DIN = 12;
int CS = 11;
int CLK = 10;

int i = 0;
/*
   false = down
   true = up
*/

LedControl lc = LedControl(DIN, CLK, CS, 2);

void setup() {
  // put your setup code here, to run once:
  lc.shutdown(0, false);
  lc.setIntensity(0, 0.1);

  lc.shutdown(1, false);
  lc.setIntensity(1, 0.1);
}

void loop() {
  // put your main code here, to run repeatedly:

  lc.setRow(0, 3, 60);
  lc.setRow(0, 2, 24);
  lc.setRow(0, 4, 60);
  lc.setRow(0, 5, 24);

  lc.setRow(1, 3, 60);
  lc.setRow(1, 2, 24);
  lc.setRow(1, 4, 60);
  lc.setRow(1, 5, 24);


}
