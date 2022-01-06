#include <iostream>

int main_03()
{
	const int Fave = 27;
	using namespace std;
	int n;
	cout << "Enter a number in the range 1-100 to find ";
	cout << "my favorite number: ";
	do
	{
		cin >> n;
		if (n < Fave)
		{
			cout << "Too low -- guess again: ";
		} 
		else if (n > Fave)
		{
			cout << "Too high -- guess again: ";
		}
		else
		{
			cout << Fave << " is right!\n";
		}
	} while (n != Fave);
	return 0;
}
/*
Enter a number in the range 1-100 to find my favorite number: 1
Too low -- guess again: 50
Too high -- guess again: 30
Too high -- guess again: 28
Too high -- guess again: 27
27 is right!
*/