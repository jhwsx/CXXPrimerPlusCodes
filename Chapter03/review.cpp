#include <iostream>

int main_review()
{
	using namespace std;
	/*
	1，为了使程序员能够根据特定的数据要求选择合适的类型；
	2，
	a. int i = 80;
	b. unsigned short j = 42110;
	c. int k = 3000000000;
	3，C++ 没有提供自动防止超出整型限制的功能，可以使用头文件 climits 来确定限制情况。
	4，33L 是 long 型，33 是 int 型
	5，不真正等价。对某些系统来说，它们是等效的。只有在使用了ASCII码的系统上，char grade = 65; 语句才将得分设置为字母 A，
	而第二条语句还可以使用其他编码的系统。其次，65 是一个 int 型常量，而 'A' 是一个 char 常量。
	6，见代码
	7，
	8，见代码
	9，见代码
	10，见代码
	*/
	// 6
	int i = 80;
	unsigned short j = 42110;
	int k = 3000000000;

	cout.put(88);
	cout << endl;
	cout << char(88) << endl;
	cout << static_cast<char> (88) << endl;

	// 8
	cout << 8 * 9 + 2 << endl; // 74
	cout << 6 * 3 / 4 << endl; // 4
	cout << 3 / 4 * 6 << endl; // 0
	cout << 6.0 * 3 / 4 << endl; // 4.500000
	cout << 15 % 4 << endl; // 3

	// 9
	double x1 = 11.99;
	double x2 = 19.99;
	int x3 = int(x1) + int(x2);
	cout << "x3 = " << x3 << endl;
	int x4 = x1 + x2;
	cout << "x4 = " << x4 << endl;

	// 10
	auto cars = 15; // int
	auto iou = 150.37f; // float
	auto level = 'B'; // char
	auto crat = U'\U00002155'; // char32_t
	auto fract = 8.25f / 2.5; // double


	return 0;
}
/*
X
X
X
74
4
0
4.5
3
x3 = 30
x4 = 31
*/