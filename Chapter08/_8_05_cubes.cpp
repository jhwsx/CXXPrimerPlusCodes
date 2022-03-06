// 比较常规参数和引用参数
#include <iostream>

double cube(double a);
double refcube(double& ra);
double constrefcube(const double& cra);
int main_05()
{
	using namespace std;
	double x = 3.0;

	cout << cube(x);
	cout << " = cube of " << x << endl;
	cout << refcube(x);
	cout << " = cube of " << x << endl;

	double y = 3.0;
	cout << constrefcube(y);
	cout << " = cube of " << y << endl;

	double z = 2.0;
	cube(z + 2); // OK
	// refcube(z + 2); // 编译报错， z + 2 不是一个 double 类型的变量
	constrefcube(z + 2); // OK, 仅当参数是 const 引用时，C++ 会生成一个临时变量。

	// 左值引用 &
	// 右值引用 &&
	double&& rref = std::sqrt(2);
	double j = 15.0;
	double&& jref = 2.0 * j + 18.5;
	cout << "rref = " << rref << endl;
	cout << "jref = " << jref << endl;

	double side = 3.0;
	double* pd = &side;
	double& rd = side;
	long edge = 5L;
	double lens[4] = {2.0, 5.0, 10.0, 12.0};
	// 这些不用创建临时变量
	constrefcube(side);
	constrefcube(lens[2]);
	constrefcube(rd);
	constrefcube(*pd);
	// 这些会创建临时变量
	constrefcube(edge);
	constrefcube(7.0);
	constrefcube(side + 10.0);
	return 0;
}

double cube(double a)
{
	a *= a * a;
	return a;
}

double refcube(double& ra)
{
	ra *= ra * ra; // 修改了引用的值，就是修改了 x 的值了。
	return ra;
}
double constrefcube(const double& cra) // 不允许修改引用参数
{
	return cra * cra * cra;
}
/*
27 = cube of 3
27 = cube of 27
27 = cube of 3
rref = 1.41421
jref = 48.5
*/