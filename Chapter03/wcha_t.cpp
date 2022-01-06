// 宽字符类型
#include <iostream>
#include <cfloat>
const int Months = 12; // const 作为限定符

int main_wcha_t()
{
	using namespace std;
	wchar_t bob = L'P';
	wcout << L"tall" << endl;

	char16_t ch1 = u'q';
	char32_t ch2 = U'\U0000222B';

	cout << ch1 << endl;
	cout << ch2 << endl;

	bool is_ready = true;
	cout << "is_ready = " << is_ready << endl; // 打印：1

	// bool 类型可以自动类型提升为 int 类型
	int ans = true;
	int promise = false;

	cout << "ans = " << ans << endl; // 打印：1
	cout << "promise = " << promise << endl; // 打印：0

	// 任何数字值或指针值都可以隐式转换为 bool 值
	bool start = -100;
	bool stop = 0;

	cout << "start = " << start << endl; // 打印：1
	cout << "stop = " << stop << endl; // 打印：0

	cout << Months << endl;

	const double PI = 355.0 / 113;
	cout << PI << endl;

	return 0;
}

/*
tall
113
8747
is_ready = 1
ans = 1
promise = 0
start = 1
stop = 0
12
3.14159
*/