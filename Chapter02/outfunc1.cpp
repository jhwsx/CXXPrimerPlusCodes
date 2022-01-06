// 2.5 定义自己的函数
#include <iostream>
using namespace std;
void simon1(int); // 声明函数原型，函数头
int main5_1()
{
	simon1(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon1(count);
	cout << "Done!" << endl;

	return 0;
}

void simon1(int n)
{
	cout << "Simon says touch your toes " << n << " times." << endl;
}
