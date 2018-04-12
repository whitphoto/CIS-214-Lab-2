#ifndef INTEGER_H
#define INTEGER_H
#include <stdio.h>

class integer {
	private:
		int number;
	
	public:
	void store(int);
		int getNumber();
	
		
};


void integer::store(int n){
	
	
	number = n;
}

int integer::getNumber(){
	return number;
}

#endif

