#include "ArrayInt.h"


int main() {

	ArrayInt obj1(5);

	/* 
	 copy constructor is invoked
	 what will happen on program exit if we will not define copy constructor ?
	*/
	ArrayInt obj2 = obj1;

	ArrayInt obj3(5);
	/*
	 assignment operator is invoked
	 what will happen on program exit if we will not define assignment operator ?
	*/
	obj3 = obj1;
		
	return 0;
}