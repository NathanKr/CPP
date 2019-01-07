#include "Array.h"
#include <string>
#include <iostream>

using namespace std;


int main() {

	Array<string> array(5);
	for (size_t i = 0; i < array.GetLength() ; i++)
	{
		array.Set(i, to_string(i));
	}

	cout << array.Get(2) << endl;
	
	return 0;
}