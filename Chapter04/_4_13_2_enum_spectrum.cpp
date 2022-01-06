#include <iostream>

enum spectrum
{
	red, orange, yellow, green, blue, violet, indigo, ultraviolet
};

enum bits
{
	one = 1, two = 2, four = 4, eight = 8
};
int main_Enum()
{
	using namespace std;

	spectrum band = blue;
	cout << "band = " << band << endl;
	band = spectrum(3);
	cout << "band = " << band << endl;
	// band = 2; // 报错：2 不是枚举量
	
	return 0;
}