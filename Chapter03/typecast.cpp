// 3.14 强制类型转换
#include <iostream>

int main14()
{
	using namespace std;
	int auks, bats, coots;

	auks = 19.99 + 11.99;

	bats = (int)19.99 + (int)11.99;
	coots = int(19.99) + int(11.99);

	cout << "auks = " << auks << ", bats = " << bats;
	cout << ", coots = " << coots << endl;


	char ch = 'Z';
	cout << "The code for " << ch << " is ";
	cout << int(ch) << endl;
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl;


	auto n = 100; // n 是 int 类型
	auto x = 1.5; // x 是 double 类型
	auto y = 1.3e12L; // y 是 long double 类型

	return 0;
}
/*
auks = 31, bats = 30, coots = 30
The code for Z is 90
Yes, the code is 90
*/