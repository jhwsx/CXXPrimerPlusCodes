// 4.17 Ê¹ÓÃ new ÔËËã·û
#include <iostream>

int main_17()
{
	using namespace std;
	int nights = 1001;
	int* pt = new int;
	*pt = 1001;

	cout << "nights value = ";
	cout << nights << ": location = " << &nights << endl;
	cout << "int ";
	cout << "value = " << *pt << ": location = " << pt << endl;

	double* pd = new double;
	*pd = 10000001.0;

	cout << "double ";
	cout << "value = " << *pd << ": location = " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of pt = " << sizeof(pt);
	cout << ": size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof(pd);
	cout << ": size of *pd = " << sizeof(*pd) << endl;

	delete pt;
	delete pd;
	return 0;
}

/*
nights value = 1001: location = 00C7FE60
int value = 1001: location = 00F7B708
double value = 1e+07: location = 00F7FCF0
location of pointer pd: 00C7FE48
size of pt = 4: size of *pt = 4
size of pd = 4: size of *pd = 8
*/