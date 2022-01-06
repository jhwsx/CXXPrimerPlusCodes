// Ìõ¼şÔËËã·û£¨?:£©
#include <iostream>

int main_09()
{
	using namespace std;
	int a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	cout << "The larger of " << a << " and " << b;
	int c = a > b ? a : b;
	cout << " is " << c << endl;
	return 0;
}
/*
Enter two integers: 25 18
The larger of 25 and 18 is 25
*/