// 4.10 行输入
#include <iostream>
#include <string>
#include <cstring> // C style string library

int main10()
{
	using namespace std;
	char charr[20];
	string str;

	cout << "Length of string in charr before input: "
		<< strlen(charr) << endl;
	cout << "Length of string in str before input: "
		<< str.size() << endl;
	cout << "Enter a line of text:\n";
	cin.getline(charr, 20); // 这里的 getline 是 istream 类的一个方法
	cout << "You entered: " << charr << endl;
	cout << "Enter another line of text:\n";
	getline(cin, str); // 这里的 getline 不是类方法
	cout << "You entered " << str << endl;
	cout << "Length of string in charr after input: "
		<< strlen(charr) << endl;
	cout << "Length of string in str after input: "
		<< str.size() << endl;

	// 其他形式的字符串字面值
	wchar_t title[] = L"Chief Astrogator";
	char16_t name[] = u"Felonia Ripova";
	char32_t car[] = U"Humber Super Snipe";
	// 原始字符串
	cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << '\n';
	cout << "Jim \"King\" Tutt uses \"\\n\" instead of endl." << '\n';
	cout << R"+*("(Who wouldn't?)", she whispered.)+*" << '\n';
	return 0;
}

/*
Length of string in charr before input: 35
Length of string in str before input: 0
Enter a line of text:
peanut butter
You entered: peanut butter
Enter another line of text:
blueberry jam
You entered blueberry jam
Length of string in charr after input: 13
Length of string in str after input: 13
Jim "King" Tutt uses "\n" instead of endl.
Jim "King" Tutt uses "\n" instead of endl.
"(Who wouldn't?)", she whispered.
*/
