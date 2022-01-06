// 4.19 指针加法
#include <iostream>

int main_19()
{
	using namespace std;
	double wages[3] = {10000.0, 20000.0, 30000.0};
	short stacks[3] = {3, 2, 1};

	// 获取数组地址的两种方式
	double* pw = wages;
	short* ps = &stacks[0];

	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the pw pointer:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "add 1 to the ps pointer:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

	cout << "access two elements with array notation.\n";
	cout << "stacks[0]=" << stacks[0]
		<< ", stacks[1]=" << stacks[1] << endl;
	cout << "access two elements with pointer notion.\n";
	cout << "*stacks=" << *stacks
		<< ", *(stacks + 1)=" << *(stacks + 1) << "\n\n";

	cout << sizeof(wages) << " = size of wages array.\n"; // 得到的是数组的长度
	cout << sizeof(pw) << " = size of pw pointer.\n\n"; // 得到的是指针的长度

	short tell[10];
	cout << "tell array address = " << tell << endl;
	cout << "tell array address = " << &tell << endl;
	short(*pas)[10] = &tell;

	char flower[10] = "rose";
	cout << flower << "s are red\n";
	return 0;
}

/*
pw = 00FDFB90, *pw = 10000
add 1 to the pw pointer:
pw = 00FDFB98, *pw = 20000

ps = 00FDFB80, *ps = 3
add 1 to the ps pointer:
ps = 00FDFB82, *ps = 2

access two elements with array notation.
stacks[0]=3, stacks[1]=2
access two elements with pointer notion.
*stacks=3, *(stacks + 1)=2

24 = size of wages array.
4 = size of pw pointer.

tell array address = 00FDFB4C
tell array address = 00FDFB4C
roses are red
*/