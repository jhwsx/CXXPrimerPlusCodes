// 4.1 С�͵���������
#include <iostream>

int main_1()
{
	using namespace std;
	int yams[3]; // ������ 3 ��Ԫ�ص����顣
	yams[0] = 7; // ����һ��Ԫ�ظ�ֵ
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = {20, 30, 5}; // ��������ʼ������

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " yams costs ";
	cout << yamcosts[1] << " cents per yam.\n";
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total += yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents.\n";

	cout << "\nSize of yams array = " << sizeof yams << " bytes.\n";
	cout << "Size of one element = " << sizeof yams[0] << " bytes.\n";


	int cards[4] = { 3, 6, 8, 10 }; // ��ȫ��ʼ��
	float hotelTips[5] = {5.0, 2.5}; // ����ȫ��ʼ��������Ԫ�ر���ʼ��Ϊ 0
	long totals[500] = {0}; // ����
	short things[] = {1, 5, 3, 8}; // C++ ������������Ԫ�ظ�����
	double earnings[4]{1.2e4, 1.6e4, 1.1e4, 1.7e4}; // ʹ���б��ʼ��
	unsigned int counts[10] = {}; // ����
	float balances[100]{}; // �����ˡ�
	long plifs[] = {25, 92, 3.0}; // �б��ʼ��������խ��ת��
	char slifs[] {'h', 'i', 1122011, '\0'}; // �б��ʼ��������խ��ת��
	char tlifs[]{'h','i',112, '\0'};

	// �ַ���
	// char shirt_size = "S"; // ���Ͳ�ƥ�� "S" ��ʾ�����ַ������ڵ��ڴ��ַ��
	cout << "I'd give my right arm to be" " a great violinist.\n";
	cout << "I'd give my right arm to be a great violinist.\n";
	cout << "I'd give my right ar"
		"m to be a great violinist.\n";
	return 0;
}

/*
Total yams = 21
The package with 8 yams costs 30 cents per yam.
The total yam expense is 410 cents.

Size of yams array = 12 bytes.
Size of one element = 4 bytes.
I'd give my right arm to be a great violinist.
I'd give my right arm to be a great violinist.
I'd give my right arm to be a great violinist.
*/