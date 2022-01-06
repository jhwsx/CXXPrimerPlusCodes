// 在 for 循环里面使用数值测试
#include <iostream>

int main_2()
{
	using namespace std;

	cout << "Enter the starting countdown value: ";
	int limit;
	cin >> limit;
	int i;
	for ( i = limit; i; i--) // loop test 部分：非零为true，零为false。 
	{
		cout << "i = " << i << "\n";
	}
	cout << "Done now that i = " << i << "\n";
	return 0;
}
/*
Enter the starting countdown value: 5
i = 5
i = 4
i = 3
i = 2
i = 1
Done now that i = 0
*/