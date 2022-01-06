// 3.7 使用转义序列
#include <iostream>

int main7()
{
	using namespace std;
	cout << "\aOperation \"HyperHype\" is now activated!\n";
	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified: Proceed with Plan Z3!\n";
	return 0;
}

/*
Operation "HyperHype" is now activated!
Enter your agent code:12345678
You entered 12345678...
Code verified: Proceed with Plan Z3!
*/