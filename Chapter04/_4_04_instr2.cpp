// 4.4 ʹ�� getline ��ȡ�������
#include <iostream>

int main4()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	// getline �ĵ�һ�������������洢�����е���������ƣ��ڶ���������Ҫ��ȡ���ַ��������ʵ����20����ô����ȡ19����Ҫ����һ�������ַ��á�
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