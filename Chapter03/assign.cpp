// 3.13 ��ʼ�����е�ת��
#include <iostream>

int main13()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3; // int ת��Ϊ float
	int guess = 3.9832; // double ת��Ϊ int
	int debt = 7.2E12; // �� C++ �н��δ����
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;

	cout << "###############################" << endl;

	const int code = 66;
	int x = 66;
	// char c1{31325}; // խ��ת�����������
	char c2 = {66}; // ���Դ�ţ�����
	char c3{code}; // ���Դ�ţ�����
	// TODO(���ﲻ��)
	// char c4 = {x}; // ������x ���ǳ���
	x = 31325;
	char c5 = x; // ���ֻ����խ��ת���ģ�����ת��

	cout << "###############################" << endl;

	int thorn = 1000;
	long thorn_long =(long) thorn; // C ���Ե�д��
	long thorn_long2 =long (thorn); // C++ ���Ե�д����ǿ������ת�������Ǻ��������ˡ�
	long thorn_long3 = static_cast<long>(thorn);
	cout << thorn_long << endl;
	cout << thorn_long2 << endl;
	cout << thorn_long3 << endl;

	cout << int('Q') << endl;
	cout << 'Q' << endl;
	return 0;
}

/*
tree = 3.000000
guess = 3
debt = 1634811904
###############################
###############################
1000
1000
1000
81
Q
*/