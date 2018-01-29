# Knightbot
Middle Georgia State University Robotics Research repository

## How To Get Started

### Eyes
These are the prerequisites for running the files in this repository with an arduino:

- Possess an [8x8 led matrix](https://create.arduino.cc/projecthub/SAnwandter1/programming-8x8-led-matrix-23475a)
- Install the Ledcontrol library for arduino

Once these steps have been taken, download whichever folder you would like to use and make modifications to. You must download both the header and cpp file in the folder for the library to work.

Follow the steps outlined [here](https://www.arduino.cc/en/Guide/Libraries) to upload the library to your project.

Once the library has been properly installed on the arduino IDE, check out this starter code:

```
#include <blink001.h>
#include <LedControl.h>

int incomingByte = 0;

int DIN = 12;
int CS = 11;
int CLK = 10;

int i = 0;
boolean direction = false;
/*
   false = down
   true = up
*/

LedControl lc = LedControl(DIN, CLK, CS, 2);
blink001 blink1 = blink001();

void setup() {
  // put your setup code here, to run once:
  lc.shutdown(0, false);
  lc.setIntensity(0, 0.1);

  lc.shutdown(1, false);
  lc.setIntensity(1, 0.1);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  blink1.display(lc, i, direction);
  checkIterator();
}

//This function resets the interator variable "i" to values between 1 and 8 to keep track of the current row.
void checkIterator() {
  if (i < 8) {
    i++;

  } else {

    i = 0;
    direction = !direction;

    if (direction == false) {
      delay(1000);
      isActive = false;
      selection = 0;
    } else {
      delay(1000);

    }
  }

}

```
