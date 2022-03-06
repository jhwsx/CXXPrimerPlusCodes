#include <iostream>

using namespace std;
long long factorial(long long n);
int main_test05()
{
	long long n;
	cout << "Enter a number: ";
	while (cin >> n)
	{
		cout << n << "! = " << factorial(n) << endl;
		cout << "Enter next number: ";
	}
	return 0;
}

long long factorial(long long n)
{
	if (n == 0 || n == 1) return 1;
	return n * factorial(n - 1);
}
