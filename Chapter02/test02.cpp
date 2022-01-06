#include <iostream>

int longtoyard(int);

int main_t2()
{
	using namespace std;
	int distance_long;
	cout << "Enter the distance in longs: ";
	cin >> distance_long;
	int yards = longtoyard(distance_long);
	cout << distance_long << " long = ";
	cout << yards << " yards." << endl;

	return 0;
}

int longtoyard(int distance_long)
{
	return 220 * distance_long;
}