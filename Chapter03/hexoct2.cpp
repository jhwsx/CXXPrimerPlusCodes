// 3.4 ��ʾ 16 ���� �� 8 ���Ƶ�������
#include <iostream>

int main4()
{
	using namespace std;

	int chest = 42; 
	int waist = 42; 
	int inseam = 42; 

	cout << "Monsieur cuts a striking figure!\n";
	// cout Ĭ����ʮ���Ƹ�ʽ��ʾ������
	cout << "chest = " << chest << " (decimal for 42)\n";
	cout << hex; // �޸�Ϊ 16 ���Ƹ�ʽ���
	cout << "waist = " << waist << " (hex for 42)\n";
	cout << oct; // �޸�Ϊ 8 ���Ƹ�ʽ���
	cout << "inseam = " << inseam << " (octal for 42)\n";
	return 0;
}

/*
Monsieur cuts a striking figure!
chest = 42 (decimal for 42)
waist = 2a (hex for 42)
inseam = 52 (octal for 42)
*/