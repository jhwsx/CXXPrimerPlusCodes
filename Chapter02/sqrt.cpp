// 2.4 使用 sqrt 函数
#include <iostream>
#include <cmath> // for sqrt，通过包含头文件 cmath(这里面定义了 sqrt 函数原型)，就提供了 sqrt 的原型了。

int main4()
{
	using namespace std;

	double area;
	cout << "Enter the floor area, in square feet, of your home: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "That's the equivalent of a square " << side
		<< " feet to the side." << endl;
	cout << "How fascinating!" << endl;

	double pow_result = pow(2.0, 4.0); // 2 的 4 次方。
	cout << "pow_result: " << pow_result << endl;
	int rand_value = rand();
	cout << "rand_value: " << rand_value << endl;
	return 0;
}