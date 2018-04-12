#ifndef EXPONEN_H
#define EXPONEN_H

#include <stdio.h>
#include <math.h>

class exponen{
	private:
		integer in1, in2;
		
	public:
		void store(int, int);
		int get1() const;
		int get2() cons;
		double power() Const;
};

int exponen::get1()) const{

	return in1.getNumber();
}


int exponen::get2() const
{
	return in2.getNumber();
}

void exponen::store(int n1, int n2){
	in1.store(n1);
	in2.store(n2);
}

double exponen::power()) const{
return pow(get1(), get2());

}

#endif

