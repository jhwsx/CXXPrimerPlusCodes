// 2.5 定义自己的函数
#include <iostream>
void simon(int); // 声明函数原型，函数头
int main5()
{
	using namespace std;
	simon(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;

	return 0;
}

void simon(int n)
{
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
}
