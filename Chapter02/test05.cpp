#include <iostream>

using namespace std;

double celsiustofahrenheit(double);

int main_t5()
{
	cout << "Please enter a Celsius value: ";
	double celsius;
	cin >> celsius;
	double fahrenheit = celsiustofahrenheit(celsius);
	cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << endl;
	return 0;
}

double celsiustofahrenheit(double celsius)
{
	return 1.8 * celsius + 32.0;
}