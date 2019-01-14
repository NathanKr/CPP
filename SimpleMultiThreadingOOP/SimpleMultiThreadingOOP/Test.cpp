#include "Test.h"
#include <iostream>
#include <thread>

using namespace std;

thread Test::runAsThread() {
	return  thread(&Test::thread_func, this, 200);
}

void Test::thread_func(size_t length) {
	for (size_t i = 0; i < length; i++)
	{
		cout << "Thread func.  "  << " index : " << i << endl;
	}
}

