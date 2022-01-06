// 2.2 
#include <iostream>

int main2()
{
	using namespace std;

	int carrots; // 定义一个整型变量

	carrots = 25; // 赋值

	cout << "I have ";
	cout << carrots;
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
	return 0;
}