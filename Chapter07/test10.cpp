#include <iostream>

using namespace std;
double add(double x, double y);
double subtract(double x, double y);
double calculate(double x, double y, double (*operation)(double, double));
int main()
{
	double x;
	double y;
	double (*pa[2])(double, double) = {add, subtract};
	while (true)
	{
		cout << "Enter two numbers: ";
		while (!(cin >> x >> y))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue; // Ïû³ıµô»µµÄÊäÈë
			cout << "Enter two numbers: ";
		}
		for (int i = 0; i < 2; i++)
		{
			double result = calculate(x, y, pa[i]);
			cout << "result:" << result << endl;
		}
	}
	cout << "Done.\n";
	return 0;
}

double add(double x, double y)
{
	return x + y;
}

double subtract(double x, double y)
{
	return x - y;
}

double calculate(double x, double y, double(*operation)(double, double))
{
	return operation(x, y);
}
