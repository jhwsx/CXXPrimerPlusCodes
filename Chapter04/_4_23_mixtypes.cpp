// 4.23 һЩ���͵����
#include <iostream>

struct antarctica_years_end
{
	int year;
};

int main_23()
{
	using namespace std;

	antarctica_years_end s01, s02, s03;
	s01.year = 1998; // ʹ�ó�Ա��������ʳ�Ա

	antarctica_years_end* pa = &s02;
	pa->year = 1999; // ʹ�ü�ӳ�Ա��������ʳ�Ա

	antarctica_years_end trio[3]; // �ṹ����

	trio[0].year = 2003;
	cout << trio->year << endl;

	(trio + 1)->year = 2004;

	const antarctica_years_end* arp[3] = {&s01, &s02, &s03}; // ָ������

	cout << arp[1]->year << endl;

	const antarctica_years_end** ppa = arp; // ָ�������ָ��
	cout << (*ppa)->year << endl;

	auto ppb = arp; // C++ auto �����ƶ�
	cout << (*(ppb + 1))->year << endl;

	return 0;
}
/*
2003
1999
1998
1999
*/