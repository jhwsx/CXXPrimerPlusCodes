// 4.3 ��ȡ����һ���ַ���
#include <iostream>

int main3()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin >> name; // cin ʹ�ÿհ��������ַ����Ľ���λ�á�
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