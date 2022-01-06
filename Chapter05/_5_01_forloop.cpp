// 介绍 for 循环
#include <iostream>

int main_1()
{
	using namespace std;

	int i; // 创建一个计数器
	// loop initialization; loop test; loop update
	for (i = 0; i < 5; i++)
	{
		// loop body
		cout << "C++ knows loops.\n";
	}
	cout << "C++ knows when to stop.\n";
	return 0;
}
/*
C++ knows loops.
C++ knows loops.
C++ knows loops.
C++ knows loops.
C++ knows loops.
C++ knows when to stop.
*/