#include <iostream>

using namespace std;

double harmonic_mean(double x, double y);

int main_test01()
{
	/*
	��������ȡ����
	������Щ����������ƽ����
	����һ���ļ�����ȡ����
	*/
	cout << "Enter two numbers: ";
	double x;
	double y;
	cin >> x;
	cin >> y;
	while (x != 0.0 && y != 0.0)
	{
		cout << "The harmonic mean of " << x << " and " << y << " is " << harmonic_mean(x, y) << endl;
		cout << "Enter next two numbers: ";
		cin >> x;
		cin >> y;
	}
	cout << "Done.\n";
	return 0;
}

double harmonic_mean(double x, double y)
{
	return 2.0 * x * y / (x + y);
}
