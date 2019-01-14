#include <thread>
#include <iostream>

using namespace std;

void thread_func() {
	for (size_t i = 0; i < 100; i++)
	{
		cout << "Thread func . thread id  : " << this_thread::get_id() << " index : " << i << endl;
	}
}

int main() {

	thread t1(thread_func);// --- start immidiately

	for (size_t i = 0; i < 100; i++)
	{
		cout << "Main thread : " << i << endl;
	}

	t1.join(); // -- removing this may cause abort

	return 0;
}