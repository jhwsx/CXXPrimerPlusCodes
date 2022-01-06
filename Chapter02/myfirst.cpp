// 2.1
#include <iostream> // 一条预处理指令

int main1()
{
	using namespace std; // using 编译指令，表示可以使用 std 名称空间中定义的名称，而不必使用 std:: 前缀。
	cout << "Come up and C++ me some time."; // << 是插入运算符，表示将其右侧的信息插入到流中。
	cout << endl; // endl 表示重启一行。
	cout << "You won't regret it!" << endl; 

	cin.get();
	return 0;
}