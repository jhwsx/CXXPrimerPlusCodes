// 3.8 ��������
#include <iostream>

int main8()
{
	using namespace std;
	// ע���벻ע�����е�����Աȣ�
	cout.setf(ios_base::fixed, ios_base::floatfield); // ��ʹ���ʹ�ö����ʾ����
	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ",\nand ten million tubs = ";
	cout << 10 * million * tub << endl;

	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;
	return 0;
}
/*
ע�ͣ�
tub = 3.33333, a million tubs = 3.33333e+06,
and ten million tubs = 3.33333e+07
mint = 3.33333 and a million mints = 3.33333e+06
��ע�ͣ�
tub = 3.333333, a million tubs = 3333333.250000,
and ten million tubs = 33333332.000000
mint = 3.333333 and a million mints = 3333333.333333
*/