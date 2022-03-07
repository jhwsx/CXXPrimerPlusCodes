#include <iostream>

template<class T>
T max5(T arr[]);

int main_test05()
{
	using namespace std;
	int intarr[] = {1, 4, 7, 9, 2};
	cout << max5(intarr) << endl;
	double doublearr[] = {1.1, 2.3, 4.5, 6.7, 8.9};
	cout << max5(doublearr) << endl;
	return 0;
}

template<class T>
T max5(T arr[])
{
	T max = arr[0];
	for (int i = 1; i < 5; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
/*
9
8.9
*/