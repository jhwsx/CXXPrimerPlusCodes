// 使用 clock() 和头文件 ctime 来创建延迟循环
#include <iostream>
#include <ctime> // 描述 clock() 函数，clock_t 类型
int main_14()
{
	using namespace std;
	cout << "Enter the delay time, in seconds: ";
	int secs;
	cin >> secs;
	// clock_t 是类型别名
	clock_t delay = secs * CLOCKS_PER_SEC; // 把秒数转换成系统时间单位
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "done \a\n";

	// 定义类型别名
	typedef char byte; // 给 char 类型起一个别名为 byte
	byte ch = 'a';
	cout << "ch = " << byte(ch) << endl;

	typedef float* float_pointer;
	float f = 1.55f;
	float_pointer fp = &f;
	cout << "f = " << *fp << endl;
	return 0;
}
/*
Enter the delay time, in seconds: 10
starting
done
ch = a
f = 1.55
*/