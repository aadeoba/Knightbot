#ifndef errorFace_h
#define	errorFace_h


#include <expression.h>

class errorFace : public expression {
	public:
	
		errorFace();
		
		void display(LedControl lc, int iterator, bool direction);
		
		
	private:
		void displayPupil(LedControl lc, int iterator, bool direction);
		
		void sweepAnim(LedControl lc, int iterator, bool direction);
		
};

#endif