#include <expression.h>

int expression::currentRow(int iterator, bool direction){
	
	int output;

  	if (direction == false) {

    	output = iterator;
  	} else {

    	output = 8 - iterator;
  	}

  	return output;
}