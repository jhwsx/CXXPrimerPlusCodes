// 4.3 读取超过一个字符串
#include <iostream>

int main3()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin >> name; // cin 使用空白来决定字符串的结束位置。
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}
/*
Enter your name:
zhichao wang
Enter your favorite dessert:
I have some delicious wang for you, zhichao.
*/