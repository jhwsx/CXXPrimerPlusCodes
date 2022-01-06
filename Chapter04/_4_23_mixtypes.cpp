// 4.23 一些类型的组合
#include <iostream>

struct antarctica_years_end
{
	int year;
};

int main_23()
{
	using namespace std;

	antarctica_years_end s01, s02, s03;
	s01.year = 1998; // 使用成员运算符访问成员

	antarctica_years_end* pa = &s02;
	pa->year = 1999; // 使用间接成员运算符访问成员

	antarctica_years_end trio[3]; // 结构数组

	trio[0].year = 2003;
	cout << trio->year << endl;

	(trio + 1)->year = 2004;

	const antarctica_years_end* arp[3] = {&s01, &s02, &s03}; // 指针数组

	cout << arp[1]->year << endl;

	const antarctica_years_end** ppa = arp; // 指向数组的指针
	cout << (*ppa)->year << endl;

	auto ppb = arp; // C++ auto 类型推断
	cout << (*(ppb + 1))->year << endl;

	return 0;
}
/*
2003
1999
1998
1999
*/