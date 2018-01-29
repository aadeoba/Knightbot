#include "happyFace.h"

/*
lc is the object that controls and displays the light on each matrix
direction is a boolean that is false when down and true when up
*/

/*
Constructor method ---DO NOT TOUCH----
*/

happyFace::happyFace(){

}

/*
This method is called by the Arduino in the main file. 
Make sure the text before the "::" matches the name of the file
			---DO NOT EDIT CONTENTS----
*/

void happyFace::display(LedControl lc, int iterator, bool direction){

	displayPupil(lc, iterator, direction);
	sweepAnim(lc, iterator, direction);
	
}

/*
sweepAnim() is the function that houses the instructions for the eye animation 
Make sure the text before the "::" matches the name of the file
*/

void happyFace::sweepAnim(LedControl lc, int iterator, bool direction){

	//Logic used to determine what to make the row number
  int row = currentRow(iterator, direction);

  if (direction == false) {
    /*
       If down, then light up all preceding rows
    */
    lc.setRow(0, row, 255);

    lc.setRow(1, row, 255);

    delay(50);

    lc.setRow(0, row, 0);

    lc.setRow(1, row, 0);

  } else {

    /*
       If up, the turn off all rows as the lid moves up
    */

    lc.setRow(0, row, 255);

    lc.setRow(1, row, 255);

    delay(50);

    lc.setRow(0, row, 0);

    lc.setRow(1, row, 0);
  }

  
}


/*
displayPupil() is the function that houses the static display for each eye
Make sure the text before the "::" matches the name of the file
*/

void happyFace::displayPupil(LedControl lc, int iterator, bool direction){

	//iterator row
  int row = currentRow(iterator, direction);
  
  //First Eye
  
  if(direction == false){
  
  	switch (row){
  	
  		case 1: lc.setRow(1, 1, 24);
  		
  		case 2: lc.setRow(0, 2, 60);
  		
  		case 3: lc.setRow(0, 3, 102);
  		
  		case 4: lc.setRow(0, 4, 195);
  		
  		case 5: lc.setRow(0, 5, 129);
  	}
  	
  }
  
  lc.setRow(0, 1, 24);
  lc.setRow(0, 2, 60);
  lc.setRow(0, 3, 102);
  lc.setRow(0, 4, 195);
  lc.setRow(0, 5, 129);
  
  
  //Second Eye
  lc.setRow(1, 1, 24);
  lc.setRow(1, 2, 60);
  lc.setRow(1, 3, 102);
  lc.setRow(1, 4, 195);
  lc.setRow(1, 5, 129);
  
}