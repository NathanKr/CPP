#pragma once
#include <thread>

class Test
{
public:
	std::thread runAsThread();

private:
	void thread_func(size_t length);
};

