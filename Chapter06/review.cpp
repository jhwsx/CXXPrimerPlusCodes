#include <iostream>

int main_review()
{
	using namespace std;
	/*
	1. �ڶ��ָ�ʽ����ǿո���Ļ�������һ���жϡ�
	*/
	/*
	2. ������� int ���͵�ֵ�ˡ�
	*/
	/*
	3.
	Hi!
	H$i$!$
	$Send $10 or $20 now!
	S$e$n$d$ $ct1 = 9, ct2 = 9
	*/
	/*char ch;
	int ct1, ct2;
	ct1 = ct2 = 0;
	while ((ch = cin.get()) != '$')
	{
		cout << ch;
		ct1++;
		if (ch = '$')
		{
			ct2++;
		}
		cout << ch;
	}
	cout << "ct1 = " << ct1 << ", ct2 = " << ct2 << endl;*/
	/*
	4.
	*/
	// a.
	int weight = 0;
	weight >= 115 && weight < 125;
	// b.
	char ch = 'a';
	ch == 'q' || ch == 'Q';
	// c.
	int x = 0;
	x % 2 == 0 && x != 26;
	// d.
	(x % 2 == 0) && (x / 26 != 0);
	// e.
	int donation = 0;
	int guest = 1;
	((donation >= 1000) && (donation <= 2000)) || (guest == 1);
	// f.
	(ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
	/*
	5. x Ϊ 0 ���� 1���� !!x ��ֵ��Ϊ x������ȡֵ������ͬ��
	*/
	int y = 100;
	cout << "!!y = " << !!y << endl;
	int z = 0;
	cout << "!!z = " << !!z << endl;
	/*
	6. ʹ����Ԫ�����?:
	*/
	int i = 1;
	/*int result = i;
	if (i < 0)
	{
		result = -i;
	}*/
	int result = i > 0 ? i : -i;
	cout << "result = " << result << endl;
	/*
	7.
	*/
	int a_grade = 0;
	int b_grade = 0;
	int c_grade = 0;
	int d_grade = 0;
	int f_grade = 0;
	switch (ch)
	{
	case 'A':
		a_grade++;
		break;
	case 'B':
		b_grade++;
		break;
	case 'C':
		c_grade++;
		break;
	case 'D':
		d_grade++;
		break;
	default:
		f_grade++;
		break;
	}
	/*
	8. 
	ʹ��������ǩʱ������û���ʱ�����˷���������������Ϊ�������벻�ܴ����ַ�������
	ʹ���ַ���ǩʱ������û���ʱ�����������������Ὣ5��Ϊ�ַ��������ᵼ�³������ġ�
	*/
	/*
	9.
	*/
	/*
	int line = 0;
	char c;
	while (cin.get(c))
	{
		if (c == 'Q')
			break;
		if (c != '\n')
			continue;
		line++;
	}
	cout << "line = " << line << endl;
	*/
	int line = 0;
	char c;
	cin.get(c);
	while (c != 'Q')
	{
		if (c == '\n')
			line++;
		cin.get(c);
	}
	cout << "line = " << line << endl;
	return 0;
}