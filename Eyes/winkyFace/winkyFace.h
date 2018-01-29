#ifndef winkyFace_h
#define	winkyFace_h


#include <expression.h>

class winkyFace : public expression {
	public:
	
		winkyFace();
		
		void display(LedControl lc, int iterator, bool direction);
		
		
	private:
		void displayPupil(LedControl lc, int iterator, bool direction);
		
		void sweepAnim(LedControl lc, int iterator, bool direction);
		
};

#endif