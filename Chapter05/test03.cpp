#include <iostream>

int main_test03()
{
	using namespace std;
	int num;
	int sum = 0;
	cin >> num;
	while (num != 0)
	{
		sum += num;
		cout << "sum = " << sum << endl;
		cin >> num;
	}
	return 0;
}
/*
1
sum = 1
2
sum = 3
3
sum = 6
4
sum = 10
5
sum = 15
10
sum = 25
100
sum = 125
*/