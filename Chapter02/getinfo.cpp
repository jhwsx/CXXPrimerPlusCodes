// 2.3
#include <iostream>

int main3()
{
	using namespace std;

	int carrots;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots; // >> �ǲ������������ʾ���ݴ� cin ���� carrots.
	cout << "Here are two more. ";
	carrots = carrots + 2;
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}