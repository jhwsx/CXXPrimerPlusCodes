#include <iostream>
#include <string>
#include <vector>

int main_test06()
{
	using namespace std;
	struct patron
	{
		string name;
		double money = 0.0;
	};
	cout << "Enter the number of patrons: ";
	int num;
	cin >> num;
	patron* arr = new patron[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Enter the name of patron #" << i + 1 << ": ";
		cin >> arr[i].name;
		cout << "Enter the money of patron #" << i + 1 << ": ";
		cin >> arr[i].money;
		cin.get(); // 消耗掉换行符
	}
	// 分类
	vector<patron> grandpatrons;
	vector<patron> patrons;
	for (int i = 0; i < num; i++)
	{
		if (arr[i].money > 10000)
		{
			grandpatrons.insert(grandpatrons.begin(), arr[i]);
		}
		else
		{
			patrons.insert(patrons.begin(), arr[i]);
		}
	}
	if (!grandpatrons.empty())
	{
		cout << "Grand Patrons:\n";
		for (int i = 0; i < grandpatrons.size(); i++)
		{
			cout << "name: " << (grandpatrons[i].name.empty() ? "none" : grandpatrons[i].name)
				<< ", money: " << grandpatrons[i].money << endl;
		}
	}
	if (!patrons.empty())
	{
		cout << "Patrons:\n";
		for (int i = 0; i < patrons.size(); i++)
		{
			cout << "name: " << (patrons[i].name.empty() ? "none" : patrons[i].name)
				<< ", money: " << patrons[i].money << endl;
		}
	}
	
	delete[] arr;
	return 0;
}
/*
Enter the number of patrons: 5
Enter the name of patron #1: zhang
Enter the money of patron #1: 12000
Enter the name of patron #2: li
Enter the money of patron #2: 5000
Enter the name of patron #3: wang
Enter the money of patron #3: 13000
Enter the name of patron #4: zhao
Enter the money of patron #4: 1000
Enter the name of patron #5: liu
Enter the money of patron #5: 20000
Grand Patrons:
name: liu, money: 20000
name: wang, money: 13000
name: zhang, money: 12000
Patrons:
name: zhao, money: 1000
name: li, money: 5000
*/