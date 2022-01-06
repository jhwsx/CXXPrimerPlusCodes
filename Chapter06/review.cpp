#include <iostream>

int main_review()
{
	using namespace std;
	/*
	1. 第二种格式如果是空格符的话，会少一次判断。
	*/
	/*
	2. 将会输出 int 类型的值了。
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
	5. x 为 0 或者 1，则 !!x 的值仍为 x；其他取值，则不相同。
	*/
	int y = 100;
	cout << "!!y = " << !!y << endl;
	int z = 0;
	cout << "!!z = " << !!z << endl;
	/*
	6. 使用三元运算符?:
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
	使用整数标签时，如果用户此时输入了非整数，则程序会因为整数输入不能处理字符而挂起；
	使用字符标签时，如果用户此时输入了整数，则程序会将5作为字符处理，不会导致程序挂起的。
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