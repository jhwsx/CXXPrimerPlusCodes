#include <iostream>

double besty(int);
double pam(int);

void estimate(int lines, double (*pf)(int));

int main_18()
{
	using namespace std;
	int code;
	cout << "How many lines of code do you need? ";
	cin >> code;
	cout << "Here's Besty's estimate:\n";
	estimate(code, besty);
	cout << "Here's Pam's estimate:\n";
	estimate(code, pam);
	return 0;
}

double besty(int lines)
{
	return 0.05 * lines;
}

double pam(int lines)
{
	return 0.03 * lines + 0.0004 * lines * lines;
}

void estimate(int lines, double(*pf)(int))
{
	using namespace std;
	cout << lines << " lines will take: "
		<< (*pf)(lines) << " hours\n";
}
/*
How many lines of code do you need? 100
Here's Besty's estimate:
100 lines will take: 5 hours
Here's Pam's estimate:
100 lines will take: 7 hours
*/