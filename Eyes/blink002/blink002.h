#ifndef blink002_h
#define	blink002_h

#include <expression.h>

class blink002 : public expression {
	public:
	
		blink002();
		
		void display(LedControl lc, int iterator, bool direction);
		
	private:
		void displayPupil(LedControl lc, int iterator, bool direction);
		
		void sweepAnim(LedControl lc, int iterator, bool direction);
};

#endif