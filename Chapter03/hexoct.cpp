// 3.3 显示 16 进制 和 8 进制的字面量
#include <iostream>

int main3()
{
	using namespace std;

	int chest = 42; // 十进制整型字面量
	int waist = 0x42; // 十六进制整型字面量
	int inseam = 042; // 八进制整型字面量

	cout << "Monsieur cuts a striking figure!\n";
	// cout 默认以十进制格式显示整数。
	cout << chest << " (42 in decimal)\n";
	cout << waist << " (0x42 in hex)\n";
	cout << inseam << " (042 in octal)\n";
	return 0;
}