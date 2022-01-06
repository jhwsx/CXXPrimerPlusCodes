// 读取字符到文件尾
#include <iostream>

int main_18()
{
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch);
	while (cin.fail() == false)
	{
		cout << ch;
		count++;
		cin.get(ch);
	}
	cout << endl << count << " characters read.\n";
	return 0;
}
/*
The green bird sings in the winter
The green bird sings in the winter
Yes, but the crow flies in the dawn
Yes, but the crow flies in the dawn
^Z

71 characters read.
*/