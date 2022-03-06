// ��һ����ʶ���õ����ӣ����û��һ���յġ�
#include <iostream>

int main_03()
{
	using namespace std;
	int rats = 101;
	int& rodents = rats;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies; // ������ָ����һ������������ȼ��� rats = bunnies;
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats; // rats ��ֵҲ��� 50 �ˣ����ǲ�����Ԥ�ڵġ�
	cout << ", rodents = " << rodents << endl;

	cout << "bunnies address = " << &bunnies;
	cout << ", rodents address = " << &rodents << endl;

	// ����Ĵ���Ƭ��
	int birds = 101;
	int* pt = &birds;
	int& fowls = *pt; // �ȼ��� int& fowls = birds;
	int pigs = 50;
	pt = &pigs; // �� pt ָ�� pigs.
	cout << "birds = " << birds << ", fowls = " << fowls << endl; // fowls ���õ����� birds.
	cout << "*pt = " << *pt << ", pigs = " << pigs << endl;

	return 0;
}
/*
rats = 101, rodents = 101
rats address = 0000007FC8DCF514, rodents address = 0000007FC8DCF514
bunnies = 50, rats = 50, rodents = 50
bunnies address = 0000007FC8DCF554, rodents address = 0000007FC8DCF514
birds = 101, fowls = 101
*pt = 50, pigs = 50
*/