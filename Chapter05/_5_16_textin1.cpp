// ʹ�� while ѭ������ȡ�ַ�
#include <iostream>

int main_16()
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quit:\n";
	// ��ȡ char ʱ�����ȡ������������һ����cin �����Կո�ͻ��з���
	cin >> ch;
	while (ch != '#')
	{
		cout << ch;
		count++;
		cin >> ch;
	}
	cout << endl << count << " characters read.\n";
	return 0;
}
/*
Enter characters; enter # to quit:
see ken run#really fast
seekenrun
9 characters read.
*/