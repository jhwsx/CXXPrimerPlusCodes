// 2.3
#include <iostream>

int main3()
{
	using namespace std;

	int carrots;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots; // >> 是插入运算符，表示数据从 cin 流向 carrots.
	cout << "Here are two more. ";
	carrots = carrots + 2;
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}