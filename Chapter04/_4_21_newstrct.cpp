// 4.21 �Խṹ��ʹ�� new
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
	cin.get(ps->name, 20); // 20 Ϊ�����ַ��ĸ�����ʵ�������19������һ�������ַ���
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;
	cout << "Enter price: $";
	cin >> ps->price;

	cout << "Name: " << (*ps).name << endl; // . ��ʾ��Ա�����
	cout << "Volume: " << ps->volume << endl; // -> ��ʾ��ͷ��Ա�����
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