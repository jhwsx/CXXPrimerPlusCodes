#include <iostream>
#include <array>
#include <string>
using namespace std;

void song(const char* name = "O.My Papa", int times = 1);

void iquote(int i);
void iquote(double d);
void iquote(string str);

// 4
struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void showBox(box & b);
void calculateVolume(box & b);

// 5
const int Seasons = 4;
const array<string, Seasons> Snames =
{ "Spring", "Summer", "Fall", "Winter" };

void fill(array<double, Seasons>& ra);
void show(array<double, Seasons>& ra);

// 6
double mass(double density, double volume = 1.0);
void repeat(int times, string msg);
void repeat(string msg);
int average(int a, int b);
double average(double a, double b);

// 7
template<class T>
T maximum(T t1, T t2);

// 8
template<> box maximum<box>(box b1, box b2);
int main_review()
{
	/*
	1.很短的函数适合定义为内联函数
	*/
	/*
	2.void song(const char* name, int times = 1);
	a.只需要在函数原型上修改 int times = 1
	b.函数定义不用做出修改
	c.可以
	*/
	song("Peter");
	song("Bush", 3);
	song();
	// song(1); // 这样不可以的
	/*
	打印：
	Peter
	Bush
	Bush
	Bush
	O.My Papa
	*/
	/*
	3.iquote重载
	*/
	iquote(1);
	iquote(2.5555);
	iquote("hello");
	/*
	"1"
	"2.5555"
	"hello"
	*/
	/*
	4.box
	*/
	struct box b = {"huawei company", 10, 20, 30};
	showBox(b);
	calculateVolume(b);
	showBox(b);
	/*
	5.
	*/
	// 用于存储一年四个季度的开支
	std::array<double, Seasons> expenses;
	fill(expenses);
	std::cout << "main expenses address: " << &expenses << std::endl;
	show(expenses);
	/*
	6.
	*/
	cout << "###6###" << endl;
	cout << "a. 可以使用默认参数" << endl;
	cout << "mass(2.5)=" << mass(2.5) << endl;
	cout << "mass(3.5, 4.0)=" << mass(3.5, 4.0) << endl;
	cout << "b.不可以使用默认参数，使用函数重载" << endl;
	repeat(10, "I'm OK");
	repeat("But you're kind of stupid");
	cout << "c.使用函数重载" << endl;
	cout << average(3, 6) << endl;
	cout << average(3.0, 6.0) << endl;
	cout << "d.不可以使用函数重载，因为它们的特征表相同" << endl;
	/*
	7.
	*/
	cout << "###7###" << endl;
	cout << maximum(3, 5) << endl;
	/*
	8.
	*/
	struct box b1 = { "huawei company", 10, 20, 30 };
	calculateVolume(b1);
	struct box b2 = { "huawei company", 10, 40, 20 };
	calculateVolume(b2);
	struct box mb = maximum(b1, b2);
	showBox(mb);
	/*
	9.
	v1 float 类型
	v2 float &
	v3 float &
	v4 int 类型
	v5 double 类型
	*/
	return 0;
}

void song(const char* name, int times)
{
	for (int i = 0; i < times; i++)
	{
		cout << name << endl;
	}
}

void iquote(int i)
{
	cout << "\"" << i << "\"" << endl;
}

void iquote(double d)
{
	cout << "\"" << d << "\"" << endl;
}

void iquote(string str)
{
	cout << "\"" << str << "\"" << endl;
}

void showBox(box& b)
{
	cout << "maker = " << b.maker << endl;
	cout << "height = " << b.height << endl;
	cout << "width = " << b.width << endl;
	cout << "length = " << b.length << endl;
	cout << "volume = " << b.volume << endl;
}

void calculateVolume(box& b)
{
	b.volume = b.height * b.width * b.length;
}

void fill(array<double, Seasons>& ra)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> ra[i];
	}
}

void show(array<double, Seasons>& ra)
{
	std::cout << "show expenses address: " << &ra << std::endl;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << ra[i] << endl;
		total += ra[i];
	}
	cout << "Total Expenses: $" << total << endl;
}

double mass(double density, double volume)
{
	return density * volume;
}

void repeat(int times, string msg)
{
	for (int i = 0; i < times; i++)
		cout << msg << endl;
}

void repeat(string msg)
{
	for (int i = 0; i < 5; i++)
		cout << msg << endl;
}

int average(int a, int b)
{
	return (a + b) / 2;
}

double average(double a, double b)
{
	return (a + b) / 2;
}

template<class T>
T maximum(T t1, T t2)
{
	return t1 > t2 ? t1 : t2;
}

template<>
box maximum(box b1, box b2)
{
	return b1.volume > b2.volume ? b1 : b2;
}
