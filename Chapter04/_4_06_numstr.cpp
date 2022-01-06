// 4.6 在输入数字之后输入行
#include <iostream>

int main6()
{
	using namespace std;
	cout << "What year was your house built?\n";
	int year;
	cin >> year;
	// 不加此行：没有机会输入地址字符串；加此行：就可以输入地址字符串了。
	cin.get();
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";

	return 0;
}
/*
What year was your house built?
1966
What is its street address?
Year built: 1966
Address:
Done!
*/

/*
What year was your house built?
1988
What is its street address?
Shanghai
Year built: 1988
Address: Shanghai
Done!
*/