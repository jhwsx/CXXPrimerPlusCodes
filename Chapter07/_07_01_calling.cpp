// 提供函数定义，提供函数原型，调用函数。
#include <iostream>

void simple(); // 函数原型

int main_01()
{
	using namespace std;
	cout << "main() will call the simple() function:\n";
	simple(); // 函数调用
	cout << "main() is finished with the simple() function.\n";
	return 0;
}
// 函数定义
void simple()
{
	using std::cout;
	cout << "I'm but a simple function.\n";
}
/*
main() will call the simple() function:
I'm but a simple function.
main() is finished with the simple() function.
*/