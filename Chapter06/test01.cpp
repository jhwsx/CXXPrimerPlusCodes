#include <iostream>
#include <cctype>

int main_test01()
{
	using namespace std;
	cout << "Enter text, and type @"
		" to terminate input.\n";
	char ch;
	cin.get(ch);
	while (ch != '@')
	{
		if (isdigit(ch))
		{
			
		}
		else if (islower(ch)) // ��Сд��ĸ
		{
			cout << char(toupper(ch));
		}
		else if (isupper(ch)) // �Ǵ�д��ĸ
		{
			cout << char(tolower(ch));
		}
		else
		{
			cout << ch;
		}
		cin.get(ch);
	}
	return 0;
}
/*
Enter text, and type @ to terminate input.
Hello,2022 is coming!
hELLO, IS COMING!
@
*/