#include <iostream>

int main_t1()
{
	using namespace std;
	const int Inch_per_foot = 12; // Ò»Ó¢³ßµÈÓÚ 12 Ó¢´ç¡£
	cout << "Enter your body height by inch:____\b\b\b\b";
	int height;
	cin >> height;
	int height_foot = height / 12;
	cout << height << " inch = " << height_foot << " foot." << endl;
	return 0;
}

/*
Enter your body height by inch:1000
1000 inch = 83 foot.
*/