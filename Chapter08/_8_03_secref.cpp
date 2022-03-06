// 进一步认识引用的例子：引用会从一而终的。
#include <iostream>

int main_03()
{
	using namespace std;
	int rats = 101;
	int& rodents = rats;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies; // 让引用指向另一个变量，这里等价于 rats = bunnies;
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats; // rats 的值也变成 50 了，这是不符合预期的。
	cout << ", rodents = " << rodents << endl;

	cout << "bunnies address = " << &bunnies;
	cout << ", rodents address = " << &rodents << endl;

	// 额外的代码片段
	int birds = 101;
	int* pt = &birds;
	int& fowls = *pt; // 等价于 int& fowls = birds;
	int pigs = 50;
	pt = &pigs; // 将 pt 指向 pigs.
	cout << "birds = " << birds << ", fowls = " << fowls << endl; // fowls 引用的仍是 birds.
	cout << "*pt = " << *pt << ", pigs = " << pigs << endl;

	return 0;
}
/*
rats = 101, rodents = 101
rats address = 0000007FC8DCF514, rodents address = 0000007FC8DCF514
bunnies = 50, rats = 50, rodents = 50
bunnies address = 0000007FC8DCF554, rodents address = 0000007FC8DCF514
birds = 101, fowls = 101
*pt = 50, pigs = 50
*/