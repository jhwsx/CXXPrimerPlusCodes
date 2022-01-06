// 4.4 使用 getline 读取多个单词
#include <iostream>

int main4()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	// getline 的第一个参数是用来存储输入行的数组的名称；第二个参数是要读取的字符数，如果实参是20，那么最多读取19个，要留下一个给空字符用。
	cin.getline(name, ArSize);
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, ArSize);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}
/*
Enter your name:
zhichao wang
Enter your favorite dessert:
cake
I have some delicious cake for you, zhichao wang.
*/