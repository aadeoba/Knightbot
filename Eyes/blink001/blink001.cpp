#include "blink001.h"


/*
lc is the object that controls and displays the light on each matrix
direction is a boolean that is false when down and true when up
*/


/*
Constructor method ---DO NOT TOUCH----
*/
blink001::blink001(){

}

/*
This method is called by the Arduino in the main file. 
Make sure the text before the "::" matches the name of the file
			---DO NOT EDIT CONTENTS----
*/

void blink001::display(LedControl lc, int iterator, bool direction){

	sweepAnim(lc, iterator, direction);
	displayPupil(lc, iterator, direction);
}

/*
sweepAnim() is the function that houses the instructions for the eye animation 
Make sure the text before the "::" matches the name of the file
*/
void blink001::sweepAnim(LedControl lc, int iterator, bool direction){

	//row is set to a value between 
	int row = currentRow(iterator, direction);
  
  if(direction == false){
    /*
     * If down, then light up all preceding rows
    */
    lc.setRow(0, row, 255);
	lc.setRow(1, row, 255);
    delay(25);
    
  }else{

    /*
     * If up, then turn off all rows as the lid moves up
    */
    
    lc.setRow(0, row, 0);
	lc.setRow(1, row, 0);
    delay(25); 
  }
  
}

/*
displayPupil() is the function that houses the static display for each eye
Make sure the text before the "::" matches the name of the file
*/
void blink001::displayPupil(LedControl lc, int iterator, bool direction){

	int row = currentRow(iterator, direction);
  
  //Pupil rows
  int upperPupil = 3;
  int lowerPupil = 4;
  //Value to turn on row
  int onValue = 24;
  int offValue = 0;
	
  if(row == upperPupil || row == lowerPupil){

    lc.setRow(0,row, 255);
    lc.setRow(1, row, 255);
    
  }else if(row < upperPupil || row < lowerPupil){

    lc.setRow(0, upperPupil, onValue);
    lc.setRow(0, lowerPupil, onValue);
    
    lc.setRow(1, upperPupil, onValue);
    lc.setRow(1, lowerPupil, onValue);
    
  }
}
