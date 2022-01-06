#include <iostream>

int main_t6()
{
	using namespace std;
	cout << "Enter the kilometers: ";
	double kilometers{};
	cin >> kilometers;
	cout << "Enter the litres: ";
	double litres{};
	cin >> litres;

	double cost = litres / kilometers * 100;

	cout << cost << endl;
	return 0;
}

/*
Enter the kilometers: 100
Enter the litres: 20
20
*/