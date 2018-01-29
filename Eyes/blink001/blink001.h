#ifndef blink001_h
#define	blink001_h


#include <expression.h>

class blink001 : public expression {
	public:
	
		blink001();
		
		void display(LedControl lc, int iterator, bool direction);
		
		
	private:
		void displayPupil(LedControl lc, int iterator, bool direction);
		
		void sweepAnim(LedControl lc, int iterator, bool direction);
		
};

#endif