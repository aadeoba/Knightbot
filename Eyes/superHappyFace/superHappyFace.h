#ifndef superHappyFace_h
#define	superHappyFace_h


#include <expression.h>

class superHappyFace : public expression {
	public:
	
		superHappyFace();
		
		void display(LedControl lc, int iterator, bool direction);
		
		
	private:
	
		void displayPupil(LedControl lc, int iterator, bool direction);
		
		void sweepAnim(LedControl lc, int iterator, bool direction);
		
};

#endif