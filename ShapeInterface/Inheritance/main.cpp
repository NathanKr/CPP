#include "Circle.h"
#include "Reactangle.h"
#include <iostream>

using namespace std;


int main() {

	Circle circle(10,0,0);
	Reactangle rectangle(10,20,0,0);
	Shape * arShapes[] = { &circle ,  &rectangle };
	
	for (size_t i = 0; i < 2; i++)
	{
		cout << "area via shape : " << arShapes[i]->GetArea() << endl;
	}

	
	return 0;
}