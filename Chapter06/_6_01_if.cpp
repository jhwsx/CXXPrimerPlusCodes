// ���������еĿո������ַ�����
#include <iostream>

int main_01()
{
	using namespace std;
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == ' ')
		{
			spaces++;
		}
		total++;
		cin.get(ch);
	}
	cout << spaces << " spaces, " << total;
	cout << " characters total in sentence\n";
	return 0;
}
/*
How is it going?
Not bad.
4 spaces, 24 characters total in sentence
*/