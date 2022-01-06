#include <iostream>

int main_t2()
{
	using namespace std;
	const int Inch_per_foot = 12; // 1 英尺等于 12 英寸
	const double Meter_per_Inch = 0.0254; // 1 英寸等于0.0254米
	const double Pound_per_kilogram = 2.2; // 1 千克等于 2.2 磅

	cout << "Enter your height formated by foot inch: ";
	int height_foot{};
	int height_inch{};
	cin >> height_foot;
	cin >> height_inch;

	int height = height_foot * Inch_per_foot + height_inch;
	int height_meter = height * Meter_per_Inch;

	cout << "Enter your weight by pound: ";
	double weight{};
	cin >> weight;
	double weight_kilo = weight / Pound_per_kilogram;

	double bmi = weight_kilo / (height_meter * height_meter);

	cout << "bmi = " << bmi << endl;
	return 0;
}

