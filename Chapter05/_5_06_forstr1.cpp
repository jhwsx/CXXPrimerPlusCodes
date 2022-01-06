// 对 string 使用 for 循环
#include <iostream>
#include <string>
#include <cstring>
int main_06()
{
	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;

	cout << "string size: " << word.size() << endl; // 不包括空字符
	// cout << "string strlen: " << strlen(word) << endl; // 不可以这样写，报错。

	// 反向输出 word
	for (int i = word.size() - 1; i >= 0; i--)
	{
		cout << word[i];
	}
	cout << "\nBye.\n";
	return 0;
}
/*
Enter a word: world
string size: 5
dlrow
Bye.
*/