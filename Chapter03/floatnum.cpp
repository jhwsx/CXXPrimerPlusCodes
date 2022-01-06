// 3.8 浮点类型
#include <iostream>

int main8()
{
	using namespace std;
	// 注掉与不注掉此行的输出对比：
	cout.setf(ios_base::fixed, ios_base::floatfield); // 迫使输出使用定点表示法。
	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ",\nand ten million tubs = ";
	cout << 10 * million * tub << endl;

	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;
	return 0;
}
/*
注释：
tub = 3.33333, a million tubs = 3.33333e+06,
and ten million tubs = 3.33333e+07
mint = 3.33333 and a million mints = 3.33333e+06
不注释：
tub = 3.333333, a million tubs = 3333333.250000,
and ten million tubs = 33333332.000000
mint = 3.333333 and a million mints = 3333333.333333
*/