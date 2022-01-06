#include <iostream>
#include <string>

int main_test08()
{
	using namespace std;

	struct Pizza
	{
		string company;
		float diameter;
		float weight;
	};

	Pizza* p = new Pizza;

	cout << "Enter the diameter: ";
	cin >> p->diameter;
	cin.get();
	cout << "Enter the company: ";
	getline(cin, p->company);
	cout << "Enter the weight: ";
	cin >> p->weight;

	cout << "Pizza: company = " << p->company << ", diameter = " << p->diameter
		<< ", weight = " << p->weight << endl;

	delete p;

	return 0;
}
/*
Enter the diameter: 100.4
Enter the company: Shanghai Pizza
Enter the weight: 10
Pizza: company = Shanghai Pizza, diameter = 100.4, weight = 10
*/