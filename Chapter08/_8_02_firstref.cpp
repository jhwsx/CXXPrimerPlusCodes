// �����ʹ��һ������
#include <iostream>

int main_02()
{
	using namespace std;
	int rats = 101;
	// & �����������ã�int & ��һ�����壬��ʾ�������͡�
	int& rodents = rats; // rodents ��һ�����ã���ָ�� int ���� rats �����á�
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	rodents++; // �ı����ñ�����ֵ
	cout << "rats = " << rats; // rats ��ֵҲ����ű仯
	cout << ", rodents = " << rodents << endl;
	// ��ַ��һģһ����
	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	// ����Ĵ���Ƭ��
	// ��������������ʱ�����ʼ��
	/*
	int man = 10;
	int& human; // ����ᱨ��
	human = man;
	*/
	// ������ı� woman ��ֵ����Ϊ ref �� woman �����ı�����
	int woman = 10;
	int girl = 11;
	int& ref = woman;
	ref = girl; // �� girl ��ֵ��ֵ�� ref������ʵ���ϸı��� ref �� woman ��ֵ�ˡ�
	cout << "ref = " << ref << ", woman = " << woman << endl;
	return 0;
}
/*
rats = 101, rodents = 101
rats = 102, rodents = 102
rats address = 00000044B15AF694, rodents address = 00000044B15AF694
ref = 11, woman = 11
*/