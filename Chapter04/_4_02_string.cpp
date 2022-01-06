// 4.2 在数组中存储字符串
#include <iostream>
#include <cstring> // for the strlen() 函数

int main2()
{
	using namespace std;
	const int Size = 15;
	char name1[Size]; 
	char name2[Size] = "C++owboy";

	cout << "Howdy! I'm " << name2;
	cout << "! What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n"; // strlen(name1) 得到的是存储在数组中的字符串的长度，不包括空字符串。
	cout << "in an array of " << sizeof(name1) << " bytes.\n"; // sizeof(name1) 得出的是整个数组的长度
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0'; // 把索引为 3 的字符改为了空字符了，所以 name2 对应的字符串就是 C++ 了。
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;

	return 0;
}
/*
Howdy! I'm C++owboy! What's your name?
Basicman
Well, Basicman, your name has 8 letters and is stored
in an array of 15 bytes.
Your initial is B.
Here are the first 3 characters of my name: C++
*/