// 3.12 使用 % 运算符来转换磅为英石
#include <iostream>

int main12()
{
	using namespace std;
	const int Lbs_per_stn = 14;
	int lbs;

	cout << "Enter your weight in pounds: ";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn;
	int pounds = lbs % Lbs_per_stn;
	cout << lbs << " pounds are " << stone
		<< " stone, " << pounds << " pound(s).\n";
	return 0;
}

/*
Enter your weight in pounds: 181
181 pounds are 12 stone, 13 pound(s).
*/

/*
Enter your weight in pounds: 14
14 pounds are 1 stone, 0 pound(s).
*/