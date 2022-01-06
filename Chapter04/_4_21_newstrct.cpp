// 4.21 对结构体使用 new
#include <iostream>

struct inflatable21
{
	char name[20];
	float volume;
	double price;
};

int main_21()
{
	using namespace std;
	inflatable21* ps = new inflatable21;
	cout << "Enter name of inflatable item: ";
	cin.get(ps->name, 20); // 20 为输入字符的个数，实际上最多19个，留一个给空字符。
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;
	cout << "Enter price: $";
	cin >> ps->price;

	cout << "Name: " << (*ps).name << endl; // . 表示成员运算符
	cout << "Volume: " << ps->volume << endl; // -> 表示箭头成员运算符
	cout << "Price: " << ps->price << endl;

	delete ps;
	return 0; 
}

/*
Enter name of inflatable item: Fabulous Frodo
Enter volume in cubic feet: 1.4
Enter price: $27.99
Name: Fabulous Frodo
Volume: 1.4
Price: 27.99
*/