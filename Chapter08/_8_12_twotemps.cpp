// 使用重载的模板
#include <iostream>

const int Lim = 8;

template<typename T>
void Swap2(T& a, T& b);

// 最后一个参数不是泛型，而是具体类型。
template<typename T>
void Swap2(T a[], T b[], int n);

void Show(int a[]);
int main_12()
{
	using namespace std;
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << endl;
	cout << "Use compiler-generated int swapper:\n";
	Swap2(i, j); // call generated void Swap(int& a, int& b);
	cout << "Now i, j = " << i << ", " << j << endl;

	int d1[Lim] = {0,7,2,0,4,5,2,8};
	int d2[Lim] = {1,2,9,3,2,4,1,7};
	cout << "Original arrays:\n";
	Show(d1);
	Show(d2);
	Swap2(d1, d2, Lim);
	cout << "Swapped arrays:\n";
	Show(d1);
	Show(d2);
	return 0;
}

template<typename T>
void Swap2(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
void Swap2(T a[], T b[], int n)
{
	int i;
	T temp;
	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void Show(int a[])
{
	int i;
	std::cout << "{";
	for (i = 0; i < Lim; i++)
	{
		if (i > 0)
			std::cout << ", ";
		std::cout << a[i];
	}
	std::cout << "}\n";
}
/*
i, j = 10, 20
Use compiler-generated int swapper:
Now i, j = 20, 10
Original arrays:
{0, 7, 2, 0, 4, 5, 2, 8}
{1, 2, 9, 3, 2, 4, 1, 7}
Swapped arrays:
{1, 2, 9, 3, 2, 4, 1, 7}
{0, 7, 2, 0, 4, 5, 2, 8}
*/