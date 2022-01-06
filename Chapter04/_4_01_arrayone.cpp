// 4.1 小型的整型数组
#include <iostream>

int main_1()
{
	using namespace std;
	int yams[3]; // 创建有 3 个元素的数组。
	yams[0] = 7; // 给第一个元素赋值
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = {20, 30, 5}; // 创建并初始化数组

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " yams costs ";
	cout << yamcosts[1] << " cents per yam.\n";
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total += yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents.\n";

	cout << "\nSize of yams array = " << sizeof yams << " bytes.\n";
	cout << "Size of one element = " << sizeof yams[0] << " bytes.\n";


	int cards[4] = { 3, 6, 8, 10 }; // 完全初始化
	float hotelTips[5] = {5.0, 2.5}; // 不完全初始化，其余元素被初始化为 0
	long totals[500] = {0}; // 清零
	short things[] = {1, 5, 3, 8}; // C++ 编译器将计算元素个数。
	double earnings[4]{1.2e4, 1.6e4, 1.1e4, 1.7e4}; // 使用列表初始化
	unsigned int counts[10] = {}; // 清零
	float balances[100]{}; // 清零了。
	long plifs[] = {25, 92, 3.0}; // 列表初始化不允许窄化转换
	char slifs[] {'h', 'i', 1122011, '\0'}; // 列表初始化不允许窄化转换
	char tlifs[]{'h','i',112, '\0'};

	// 字符串
	// char shirt_size = "S"; // 类型不匹配 "S" 表示的是字符串所在的内存地址。
	cout << "I'd give my right arm to be" " a great violinist.\n";
	cout << "I'd give my right arm to be a great violinist.\n";
	cout << "I'd give my right ar"
		"m to be a great violinist.\n";
	return 0;
}

/*
Total yams = 21
The package with 8 yams costs 30 cents per yam.
The total yam expense is 410 cents.

Size of yams array = 12 bytes.
Size of one element = 4 bytes.
I'd give my right arm to be a great violinist.
I'd give my right arm to be a great violinist.
I'd give my right arm to be a great violinist.
*/