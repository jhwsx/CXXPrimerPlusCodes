// 使用循环来计算并存储前 16 个阶乘
// 一个正整数的阶乘（factorial）是所有小于及等于该数的正整数的积，并且0的阶乘为1。自然数n的阶乘写作n!。1808年，基斯顿·卡曼引进这个表示法。
// 亦即n! = 1×2×3×...×(n - 1)×n。阶乘亦可以递归方式定义：0! = 1，n! = (n - 1)!×n。
#include <iostream>
const int ArSize = 16; // 外部变量

int main_4()
{
	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < ArSize; i++)
	{
		factorials[i] = i * factorials[i - 1];
	}
	for (int i = 0; i < ArSize; i++)
	{
		std::cout << i << "! = " << factorials[i] << std::endl;
	}
	return 0;
}
/*
0! = 1
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
6! = 720
7! = 5040
8! = 40320
9! = 362880
10! = 3628800
11! = 39916800
12! = 479001600
13! = 6227020800
14! = 87178291200
15! = 1307674368000
*/