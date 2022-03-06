// ʹ�����ã�ʹ��ָ��������������
#include <iostream>
// ���ó���������������
void swapr(int & a, int & b); // ���Խ���ֵ
void swapp(int* p, int* q); // ���Խ���ֵ
void swapv(int a, int b); // ���ֲ��ܽ���ֵ
int main_04()
{
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Using references to swap contents: \n";
	swapr(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Using pointers to swap contents again: \n";
	swapp(&wallet1, &wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Trying to use passing by values:\n";
	swapv(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;
	return 0;
}
// ���ǰ����ô��ݣ����� C ����û�е�
void swapr(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
// ���ǰ�ֵ���ݣ����ݵ���ָ�룬Ҳ����˵���ݵ��ǵ�ַ
void swapp(int* p, int* q)
{
	int temp = *p; // ��ָ�����ʹ�ý�����������*
	*p = *q;
	*q = temp;
}
// ���ǰ�ֵ���ݣ����ݵ��ǵ��ó����ֵ�Ŀ���
void swapv(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
/*
wallet1 = $300 wallet2 = $350
Using references to swap contents:
wallet1 = $350 wallet2 = $300
Using pointers to swap contents again:
wallet1 = $300 wallet2 = $350
Trying to use passing by values:
wallet1 = $300 wallet2 = $350
*/