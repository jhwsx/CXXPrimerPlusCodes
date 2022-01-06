// 使用 if else 语句
#include <iostream>

int main_02()
{
	char ch;

	std::cout << "Type, and I shall repeat.\n";
	std::cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			std::cout << ch;
		else
			// 第一种：
			// std::cout << ++ch;
			// 第二种：
			// std::cout << ch + 1; // 类型提升为 int 了。改成下面这样就好了。
			// std::cout << char(ch + 1);
		std::cin.get(ch);
	}
	std::cout << "\nPlease excuse the slight confusion.\n";

	
	return 0;
}
// 第一种输出
/*
Type, and I shall repeat.
An ineffable joy suffused me as I beheld
Bo!jofggbcmf!kpz!tvggvtfe!nf!bt!J!cfifme
the wonders of modern computing.
uif!xpoefst!pg!npefso!dpnqvujoh
Please excuse the slight confusion.
*/
// 第二种输出
/*
Type, and I shall repeat.
An ineffable joy suffused me as I beheld
66111331061111021031039899109102331071121223311611810310311811610210133110102339811633743399102105102109101
the wonders of modern computing.
11710510233120112111101102115116331121033311011210110211511133100112110113118117106111104
Please excuse the slight confusion.
*/