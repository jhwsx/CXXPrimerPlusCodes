// 3.3 ��ʾ 16 ���� �� 8 ���Ƶ�������
#include <iostream>

int main3()
{
	using namespace std;

	int chest = 42; // ʮ��������������
	int waist = 0x42; // ʮ����������������
	int inseam = 042; // �˽�������������

	cout << "Monsieur cuts a striking figure!\n";
	// cout Ĭ����ʮ���Ƹ�ʽ��ʾ������
	cout << chest << " (42 in decimal)\n";
	cout << waist << " (0x42 in hex)\n";
	cout << inseam << " (042 in octal)\n";
	return 0;
}