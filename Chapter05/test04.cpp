#include <iostream>

int main_test04()
{
	using namespace std;
	// 原始存款
	float originalMoney = 100;
	// Daphne 当前的钱
	float daphneMoney = originalMoney;
	// Cleo 当前的钱
	float cleoMoney = originalMoney;
	int years = 1;
	while (daphneMoney >= cleoMoney)
	{
		daphneMoney = daphneMoney + originalMoney * 0.1f;
		cleoMoney = cleoMoney * 0.05f + cleoMoney;
		years++;
	}
	cout << "years = " << years << endl;
	cout << "daphneMoney = " << daphneMoney << ", cleoMoney = " << cleoMoney << endl;
	return 0;
}
/*
years = 28
daphneMoney = 370, cleoMoney = 373.346
*/