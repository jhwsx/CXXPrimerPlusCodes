#include <iostream>

int main_08_1()
{
	using namespace std;
	int age = 39;
	// ����һ��ָ������ָ�룬��ָֹ���޸���ָ��ı�����ֵ��
	const int* pt = &age;
	// *pt += 1; // ������
	// cin >> *pt; // ������

	const float g_earth = 9.80f;
	const float* pe = &g_earth; // ��ȷ�����Խ�const�����ĵ�ַ��ֵ��ָ�� const ��ָ�롣

	const float g_moon = 1.63f;
	// float* pm = &g_moon; // �����ˣ������Խ� const �����ĵ�ַ��ֵ����ָͨ�롣

	int age1 = 39;
	int* pd = &age1;
	const int* pt1 = pd;
	// *pt1 = 42; // ������

	// TODO ��㲻���
	// const int** pp2;
	// int* p1;
	const int n = 13;
	// pp2 = &p1; // �����ˣ�cannot convert from 'int **' to 'const int **'
	// *pp2 = &n;
	// *p1 = 10;


	int sloth = 3;
	const int* ps = &sloth; // ������ͨ�� ps ָ��ı�����ָ��ı�����
	int* const finger = &sloth; // �����Ըı� finger ָ������ŵĵ�ַ��
	*finger = 4; // ��ȷ
	// finger = ps; // ���󣬽�ֹ�ı�
	return 0;
}