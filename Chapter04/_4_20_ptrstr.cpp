// 4.20 对字符串使用指针
#include <iostream>
#include <string>
#include <cstring> // c string library, for strcpy strlen

int main20()
{
	using namespace std;
	char animal[20] = "bear"; // animal 变量持有字符串 bear
	const char* bird = "wren"; // bird 变量持有 "wren" 字符串的地址
	char* ps;

	cout << animal << " and ";
	cout << bird << "\n";
	// cout << ps << "\n"; // 报错：uninitialized local variable 'ps' used

	cout << "Enter a kind of animal: ";
	cin >> animal; // 使用数组来进行输入，不要使用指针来进行输入。

	ps = animal; // 设置 ps 指向字符串
	cout << ps << "\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int*)animal << " " << &animal << endl; // 为了打印地址，把 animal 强制转为 double*, 或者 int*，不能是char*
	cout << ps << " at " << (int*)ps << " " << &ps << endl;
	
	ps = new char[strlen(animal) + 1]; // strlen 不包括空字符，获取新的内存空间
	strcpy_s(ps, strlen(animal) + 1, animal); // 拷贝字符串到新的内存空间
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;

	delete[] ps;
	return 0;
}

/*
bear and wren
Enter a kind of animal: tiger
tiger
Before using strcpy():
tiger at 004FF8D4 004FF8D4
tiger at 004FF8D4 004FF8BC
After using strcpy():
tiger at 004FF8D4
tiger at 0086F8F0
*/