#include "Test.h"
#include <thread>
#include <iostream>

using namespace std;

int main() {
	Test test;

	thread  t = test.runAsThread();// --- start immidiately

	for (size_t i = 0; i < 100; i++)
	{
		cout << "Main thread : " << i << endl;
	}

	t.join(); // -- removing this may cause abort


	return 0;
}