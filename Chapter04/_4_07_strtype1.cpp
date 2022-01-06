// 4.7 使用 C++ string 类
#include <iostream>
#include <string>

int main7()
{
	using namespace std;
	char charr1[20]; // 创建一个空数组
	char charr2[20] = "jaguar"; // 创建一个初始化的数组
	string str1; // 创建一个空的 string 对象
	string str2 = "panther"; // 创建一个初始化的 string 对象
	cout << "charr1 length: " << strlen(charr1) << endl; // 这样获取没有意义。
	cout << "str1 length:" << str1.size() << endl; // 获取为0

	cout << "Enter a kind of feline: ";
	cin >> charr1;
	cout << "Enter another kind of feline: ";
	cin >> str1;
	cout << "Here are some felines:\n";
	cout << charr1 << " " << charr2 << " "
		<< str1 << " " << str2 << endl;
	cout << "The third letter in " << charr2 << " is "
		<< charr2[2] << endl;
	cout << "The third letter in " << str2 << " is "
		<< str2[2] << endl;

	// 对 string 类使用列表初始化
	char first_date[] = {"rice"};
	char second_date[]{ "noodles" };
	string third_date = {"meat"};
	string fourth_date{"cake"};
	return 0;
}

/*
charr1 length: 35
str1 length:0
Enter a kind of feline: ocelot
Enter another kind of feline: tiger
Here are some felines:
ocelot jaguar tiger panther
The third letter in jaguar is g
The third letter in panther is n
*/