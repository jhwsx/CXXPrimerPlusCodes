#include <iostream>

int main_t4()
{
	using namespace std;
	const int Hours_per_day = 24;
	const int Minutes_per_hour = 60;
	const int Seconds_per_miniute = 60;

	cout << "Enter the number of seconds: ";
	long seconds{};
	cin >> seconds;

	int days = seconds / (Hours_per_day * Minutes_per_hour * Seconds_per_miniute);
	int days_remain = seconds % (Hours_per_day * Minutes_per_hour * Seconds_per_miniute);
	int hours = days_remain / (Minutes_per_hour * Seconds_per_miniute);
	int hours_remain = days_remain % (Minutes_per_hour * Seconds_per_miniute);
	int minutes = hours_remain / Seconds_per_miniute;
	int second = hours_remain % Seconds_per_miniute;

	cout << seconds << " seconds = " << days << " days, " << hours << " hours, "
		<< minutes << " minutes, " << second << " seconds.\n";
	return 0;
}

/*
Enter the number of seconds: 31600000
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds.
*/