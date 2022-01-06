// 3.4 显示 16 进制 和 8 进制的字面量
#include <iostream>

int main4()
{
	using namespace std;

	int chest = 42; 
	int waist = 42; 
	int inseam = 42; 

	cout << "Monsieur cuts a striking figure!\n";
	// cout 默认以十进制格式显示整数。
	cout << "chest = " << chest << " (decimal for 42)\n";
	cout << hex; // 修改为 16 进制格式输出
	cout << "waist = " << waist << " (hex for 42)\n";
	cout << oct; // 修改为 8 进制格式输出
	cout << "inseam = " << inseam << " (octal for 42)\n";
	return 0;
}

/*
Monsieur cuts a striking figure!
chest = 42 (decimal for 42)
waist = 2a (hex for 42)
inseam = 52 (octal for 42)
*/