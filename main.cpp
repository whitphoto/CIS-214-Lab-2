
#include <cstdlib>
#include <iostream>
#include<stdio.h>
#include "integer.h"
using namespace std;
int main(int argc, char *argv[])
{
	//instantiate the class
	
	integer in;
	
	//store a number
	
	in.store(5);
	
	//print the number
	
	printf("%d\n,", in.getNumber());
	system("PAUSE");
	return 0;
		
		
	}
	
