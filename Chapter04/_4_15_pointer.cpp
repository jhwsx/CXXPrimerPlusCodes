// 4.15 第一个指针变量
#include <iostream>

int main_15()
{
	using namespace std;

	int updates = 6;
	int* p_updates;
	p_updates = &updates;

	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1;
	cout << "New updates = " << updates << endl;
	return 0;
}

/*
Values: updates = 6, *p_updates = 6
Addresses: &updates = 004FFBA4, p_updates = 004FFBA4
New updates = 7
*/