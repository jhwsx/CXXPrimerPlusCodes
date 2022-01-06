#include <iostream>
#include <string>
int main_test02()
{
	using namespace std;
	string name;
	string dessert;
	cout << "Enter your name:\n";
	std::getline(cin, name);
	cout << "Enter your favorite dessert:\n";
	std::getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}
/*
Enter your name:
zhichao wang
Enter your favorite dessert:
cakes
I have some delicious cakes for you, zhichao wang.
*/