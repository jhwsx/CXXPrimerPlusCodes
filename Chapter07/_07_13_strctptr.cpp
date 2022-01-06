// 向函数传递结构指针变量，避免传递结构变量时会产生结构副本
#include <iostream>
#include <cmath>

struct polar2
{
	double distance;
	double angle;
};

struct rect2
{
	double x;
	double y;
};
// 函数原型
void rect_to_polar2(const rect2* pxy, polar2* pda);
void show_polar2(const polar2* pda);

int main_13()
{
	using namespace std;
	rect2 rplace;
	polar2 pplace;

	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar2(&rplace, &pplace);
		show_polar2(&pplace);
		cout << "Next two numbers (q to quit) : ";
	}

	return 0;
}

// 把直角坐标转为极坐标
void rect_to_polar2(const rect2* pxy, polar2* pda)
{
	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}

// 显示极坐标
void show_polar2(const polar2* pda)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << pda->distance
		<< ", angle = " << pda->angle * Rad_to_deg
		<< " degrees\n";
}
/*
Enter the x and y values: 3 4
distance = 5, angle = 53.1301 degrees
Next two numbers (q to quit) : 1 2
distance = 2.23607, angle = 63.4349 degrees
Next two numbers (q to quit) : 1 1.732
distance = 1.99996, angle = 59.9993 degrees
Next two numbers (q to quit) : q
*/