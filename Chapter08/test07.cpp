#include <iostream>

using namespace std;

struct debtss
{
	char name[50];
	double amount;
};

template<class T>
T SumArray(T arr[], int n);

template<class T>
T SumArray(T* arr[], int n);

int main()
{
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debtss mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double* pd[3];
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	cout << SumArray(things, 3) << endl;
	cout << SumArray(pd, 3) << endl;
	return 0;
}

template<class T>
T SumArray(T arr[], int n)
{
	cout << "template 1" << endl;
	T total = arr[0];
	for (int i = 1; i < n; i++)
		total += arr[i];
	return total;
}

template<class T>
T SumArray(T* arr[], int n)
{
	cout << "template 2" << endl;
	T total = *arr[0];
	for (int i = 1; i < n; i++)
		total += *arr[i];
	return total;
}
/*
template 1
147
template 2
5500
*/