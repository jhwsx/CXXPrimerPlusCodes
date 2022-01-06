// do while 是出口条件循环
#include <iostream>

int main_15()
{
	using namespace std;
	int n;

	cout << "Enter numbers in the range 1-10 to find "
		<< "my favorite number\n";
	do
	{
		cin >> n;
	} while (n != 7);
	cout << "Yes, 7 is my favorite.\n";
	return 0;
}
/*
Enter numbers in the range 1-10 to find my favorite number
1
9
2
8
3
7
Yes, 7 is my favorite.
*/