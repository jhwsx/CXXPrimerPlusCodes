#include <iostream>
int sum_arr3(const int * begin, const int * end);
int main_08()
{
	const int ArSize = 8;
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
	int sum = sum_arr3(cookies, cookies + ArSize);
	std::cout << "Total cookies eaten: " << sum << std::endl;
	sum = sum_arr3(cookies, cookies + 3);
	std::cout << "First three eaters ate " << sum << " cookies.\n";
	sum = sum_arr3(cookies + 4, cookies + ArSize);
	std::cout << "Last four eaters ate " << sum << " cookies.\n";

	return 0;
}

int sum_arr3(const int* begin, const int* end)
{
	int total = 0;
	for (const int* p = begin; p != end; p++)
	{
		total += *p;
	}
	return total;
}
/*
Total cookies eaten: 255
First three eaters ate 7 cookies.
Last four eaters ate 240 cookies.
*/