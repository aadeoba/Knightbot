#ifndef sadFace_h
#define	sadFace_h


#include <expression.h>

class sadFace : public expression {
	public:
	
		sadFace();
		
		void display(LedControl lc, int iterator, bool direction);
		
		
	private:
		void displayPupil(LedControl lc, int iterator, bool direction);
		
		void sweepAnim(LedControl lc, int iterator, bool direction);
		
};

#endif