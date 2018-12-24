#include "ArrayInt.h"


int main() {

	ArrayInt obj1(5);

	// -- what will happen on program exit if we will not define copy constructor ?
	ArrayInt obj2 = obj1;
	return 0;
}