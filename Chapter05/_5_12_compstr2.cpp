// 比较 string 类字符串
// 关系运算符可以用于 string 对象
#include <iostream>
#include <string> // string class


int main_12()
{
	using std::cout;
	using std::endl;
	using std::string;

	string word = "?ate";
	for (char ch = 'a'; word != "mate"; ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
	return 0;
}

/*
?ate
aate
bate
cate
date
eate
fate
gate
hate
iate
jate
kate
late
After loop ends, word is mate
*/