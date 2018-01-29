#ifndef straightFace_h
#define	straightFace_h


#include <expression.h>

class straightFace : public expression {
	public:
	
		straightFace();
		
		void display(LedControl lc, int iterator, bool direction);
		
		
	private:
		void displayPupil(LedControl lc, int iterator, bool direction);
		
		void sweepAnim(LedControl lc, int iterator, bool direction);
		
};

#endif