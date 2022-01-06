// 4.5 使用 get 读取多个单词
#include <iostream>

int main5()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin.get(name, ArSize).get();
	cout << "Enter your favorite dessert:\n";
	cin.get(dessert, ArSize).get();
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}
/*
Enter your name:
zhichao wang
Enter your favorite dessert:
cakes
I have some delicious cakes for you, zhichao wang.
*/