#include <iostream>
const double miles_per_100_kilometers = 62.14;
const double litres_per_gallon = 3.875;

double convert(double european_cost)
{
	// european_cost: ÿ 100 �������ĵ�������������
	// us_cost: ÿ���ض���Ӣ��
	double i = european_cost / litres_per_gallon; // ÿ 100 ������ټ���
	double j = 1 / i; // ÿ���ض��� 100 ����
	double k = j * miles_per_100_kilometers; // ÿ���ض���Ӣ��
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