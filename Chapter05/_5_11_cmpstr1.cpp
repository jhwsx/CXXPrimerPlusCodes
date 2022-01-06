// 比较C风格字符串
#include <iostream>
#include <cstring> // 提供 strcmp() 函数原型
int main_11()
{
	using namespace std;
	// 必须加上 const，因为 "mate" 是 const char* 类型的。
	const char* word = "mate";
	// word == "mate" 是比较二者是否存储在相同的地址上，结果是 1，所以没有存储在相同的地址上。
	// 所以，关系运算符不能用于比较C风格字符串。
	cout << "word == \"mate\": " << (word == "mate") << endl; 

	int result = strcmp(word, "mate");
	cout << "strcmp(word, \"mate\"): " << result << endl;

	char big[80] = "Daffy";
	char little[6] = "Daffy";
	cout << "strcmp(big, little): " << strcmp(big, little) << endl;

	cout << endl;

	char w[5] = "?ate";
	for (char ch = 'a'; strcmp(w, "mate"); ch++)
	{
		cout << w << endl;
		w[0] = ch;
	}
	cout << "After loop ends, w is " << w << endl;
	return 0;
}
/*
word == "mate": 1
strcmp(word, "mate"): 0
strcmp(big, little): 0

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
After loop ends, w is mate
*/