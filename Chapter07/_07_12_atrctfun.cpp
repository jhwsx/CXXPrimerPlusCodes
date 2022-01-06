// 向函数传递结构变量
#include <iostream>
#include <cmath>

struct polar
{
	double distance;
	double angle;
};

struct rect
{
	double x;
	double y;
};
// 函数原型
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main_12()
{
	using namespace std;
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit) : ";
	}

	return 0;
}

// 把直角坐标转为极坐标
polar rect_to_polar(rect xypos)
{
	polar result;
	result.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	result.angle = atan2(xypos.y, xypos.x);
	return result;
}

// 显示极坐标
void show_polar(polar dapos)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << dapos.distance
		<< ", angle = " << dapos.angle * Rad_to_deg
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