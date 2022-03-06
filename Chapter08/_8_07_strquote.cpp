// 将引用用于类对象
// 将指定的字符串加入到另一个字符串的前面和后面
#include <iostream>
#include <string>

using namespace std;

string version1(const string& s1, const string& s2);
// 有副作用
const string& version2(string& s1, const string& s2);
// 坏的设计
const string& version3(string& s1, const string& s2);

int main_07()
{
	string input;
	string copy;
	string result;

	// 输入一个字符串
	cout << "Enter a string: ";
	getline(cin, input);
	copy = input;
	cout << "Your string as entered: " << input << endl;
	// 使用 version1 函数：在 input 前后加上 ***
	result = version1(input, "***"); // 可以使用 C-风格字符串来初始化 string 对象。
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;

	result = version2(input, "###");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl; // 修改了原来的字符串。

	cout << "Resetting original string.\n";
	input = copy;
	result = version3(input, "@@@");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;

	return 0;
}

string version1(const string& s1, const string& s2)
{
	string temp;

	temp = s2 + s1 + s2;
	return temp; // 将 temp 的内容将被复制到一个临时存储单元中。然后，在 main 方法中，该存储单元的内容会被复制到 result 变量中。
}

const string& version2(string& s1, const string& s2)
{
	// 不创建临时变量，直接修改 s1
	s1 = s2 + s1 + s2;
	// 返回的就是传递给函数的引用，这是安全的
	return s1;
}

const string& version3(string& s1, const string& s2)
{
	string temp;
	temp = s2 + s1 + s2;
	// 返回局部变量的引用是不安全的
	return temp;
}
/*
Enter a string: It's not my fault.
Your string as entered: It's not my fault.
Your string enhanced: ***It's not my fault.***
Your original string: It's not my fault.
Your string enhanced: ###It's not my fault.###
Your original string: ###It's not my fault.###
Resetting original string.
Your string enhanced:
Your original string: It's not my fault.
*/