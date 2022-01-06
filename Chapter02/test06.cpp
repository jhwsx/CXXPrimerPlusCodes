#include <iostream>

double lightyearstoastronomicalunits(double);

int main_t6()
{
	using namespace std;
	double lightyears;
	cout << "Enter the number of light years: ";
	cin >> lightyears;
	cout << lightyears << " light years = " << lightyearstoastronomicalunits(lightyears) << " astronomical units." << endl;
	return 0;
}

double lightyearstoastronomicalunits(double lightyears)
{
	return lightyears * 63240;
}