// 4.25 数组变种
#include <iostream>
#include <vector> // STL C++98
#include <array> // C++11

int main_25()
{
	using namespace std;

	vector<int> vi; // 创建一个长度为0的int类型数组
	int n;
	cin >> n;
	vector<double> vd(n);

	array<int, 5> ai; // 创建一个包含5个元素的 int 类型数组
	array<double, 4> ad = {1.2, 2.1, 3.43, 4.3};

	cout << "ad.at(1) = " << ad.at(1) << endl;

	double a1[4] = {1.2, 2.4, 3.6, 4.8};

	vector<double> a2(4);

	a2[0] = 1.0 / 3.0;
	a2[1] = 1.0 / 5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;
	cout << "a2.at(1) = " << a2.at(2) << endl;

	array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
	array<double, 4> a4;
	a4 = a3; // 对长度相同的数组来说有效

	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

	// a1[-2] = 20.2;
	// cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
	// cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	// cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
	return 0;
}
/*
3
ad.at(1) = 2.1
a2.at(1) = 0.142857
a1[2]: 3.6 at 0055FDC0
a2[2]: 0.142857 at 0077AD58
a3[2]: 1.62 at 0055FD80
a4[2]: 1.62 at 0055FD58
*/