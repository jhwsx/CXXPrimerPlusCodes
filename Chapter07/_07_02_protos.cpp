// ʹ�ú���ԭ�ͺͺ�������
#include <iostream>

void cheers(int);
double cube(double x);
int main_02()
{
	using namespace std;
	cheers(5);
	cout << "Give me a number: ";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << "A " << side << "-foot cube has a volumne of ";
	cout << volume << " cubic feet.\n";
	cheers(cube(2));
	return 0;
}

void cheers(int n)
{
	using std::cout;
	using std::endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Cheers! ";
	}
	cout << endl;
}

double cube(double x)
{
	return x * x * x;
}
/*
Cheers! Cheers! Cheers! Cheers! Cheers!
Give me a number: 5
A 5-foot cube has a volumne of 125 cubic feet.
Cheers! Cheers! Cheers! Cheers! Cheers! Cheers! Cheers! Cheers!
*/