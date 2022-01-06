#include <iostream>
const double miles_per_100_kilometers = 62.14;
const double litres_per_gallon = 3.875;

double convert(double european_cost)
{
	// european_cost: 每 100 公里消耗的汽油量（升）
	// us_cost: 每加仑多少英里
	double i = european_cost / litres_per_gallon; // 每 100 公里多少加仑
	double j = 1 / i; // 每加仑多少 100 公里
	double k = j * miles_per_100_kilometers; // 每加仑多少英里
	return k;
}
int main()
{
	using namespace std;
	cout << "Enter the European cost: ";
	double european_cost{};
	cin >> european_cost;

	cout << "US cost: " << convert(european_cost) << endl;
	return 0;
}