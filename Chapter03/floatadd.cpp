// 3.9 float 的精度问题
#include <iostream>

int main9()
{
	using namespace std;
	float a = 2.34E+22f;
	float b = a + 1.0f;

	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;

	double c = 2.34E22;
	double d = c + 1.0;

	cout << "c = " << c << endl;
	cout << "d - c = " << d - c << endl;
	return 0;
}

/*
a = 2.34e+22
b - a = 0
c = 2.34e+22
d - c = 0
*/