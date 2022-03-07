#include <iostream>
#include <cstring>

using namespace std;

template<class T>
T maxn(T arr[], int size);
// 显式具体化
template<> const char* maxn(const char* arr[], int size);

int main_test06()
{
	int intarr[] = { 1, 4, 7, 9, 2, 3};
	cout << maxn(intarr, 6) << endl;
	double doublearr[] = { 1.1, 2.3, 4.5, 6.7};
	cout << maxn(doublearr, 4) << endl;

	const char* arr[] = { "hi", "hay", "hello", "haha", "hey" };
	cout << maxn(arr, 5) << endl;
	return 0;
}

template<class T>
T maxn(T arr[], int size)
{
	T max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

template<>
const char* maxn(const char* arr[], int size)

{
	int maxindex = 0;
	for (int i = 1; i < size; i++)
	{
		if (strlen(arr[maxindex]) < strlen(arr[i]))
			maxindex = i;
	}
	return arr[maxindex];
}
/*
9
6.7
hello
*/