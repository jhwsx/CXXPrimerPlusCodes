#include <iostream>

int main_test04()
{
	using namespace std;
	// ԭʼ���
	float originalMoney = 100;
	// Daphne ��ǰ��Ǯ
	float daphneMoney = originalMoney;
	// Cleo ��ǰ��Ǯ
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