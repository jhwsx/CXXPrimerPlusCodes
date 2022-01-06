#include <iostream>
#include <string>

int main_test07()
{
	using namespace std;

	struct Pizza
	{
		string company;
		float diameter;
		float weight;
	};

	Pizza p;
	cout << "Enter the company: ";
	getline(cin, p.company);
	cout << "Enter the diameter: ";
	cin >> p.diameter;
	cout << "Enter the weight: ";
	cin >> p.weight;

	cout << "Pizza: company = " << p.company << ", diameter = " << p.diameter
		<< ", weight = " << p.weight << endl;

	return 0;
}
/*
Enter the company: Shanghai Pizza
Enter the diameter: 10.5
Enter the weight: 2
Pizza: company = Shanghai Pizza, diameter = 10.5, weight = 2
*/