#include <iostream>

int main_review()
{
	using namespace std;
	/*
	1��Ϊ��ʹ����Ա�ܹ������ض�������Ҫ��ѡ����ʵ����ͣ�
	2��
	a. int i = 80;
	b. unsigned short j = 42110;
	c. int k = 3000000000;
	3��C++ û���ṩ�Զ���ֹ�����������ƵĹ��ܣ�����ʹ��ͷ�ļ� climits ��ȷ�����������
	4��33L �� long �ͣ�33 �� int ��
	5���������ȼۡ���ĳЩϵͳ��˵�������ǵ�Ч�ġ�ֻ����ʹ����ASCII���ϵͳ�ϣ�char grade = 65; ���Ž��÷�����Ϊ��ĸ A��
	���ڶ�����仹����ʹ�����������ϵͳ����Σ�65 ��һ�� int �ͳ������� 'A' ��һ�� char ������
	6��������
	7��
	8��������
	9��������
	10��������
	*/
	// 6
	int i = 80;
	unsigned short j = 42110;
	int k = 3000000000;

	cout.put(88);
	cout << endl;
	cout << char(88) << endl;
	cout << static_cast<char> (88) << endl;

	// 8
	cout << 8 * 9 + 2 << endl; // 74
	cout << 6 * 3 / 4 << endl; // 4
	cout << 3 / 4 * 6 << endl; // 0
	cout << 6.0 * 3 / 4 << endl; // 4.500000
	cout << 15 % 4 << endl; // 3

	// 9
	double x1 = 11.99;
	double x2 = 19.99;
	int x3 = int(x1) + int(x2);
	cout << "x3 = " << x3 << endl;
	int x4 = x1 + x2;
	cout << "x4 = " << x4 << endl;

	// 10
	auto cars = 15; // int
	auto iou = 150.37f; // float
	auto level = 'B'; // char
	auto crat = U'\U00002155'; // char32_t
	auto fract = 8.25f / 2.5; // double


	return 0;
}
/*
X
X
X
74
4
0
4.5
3
x3 = 30
x4 = 31
*/