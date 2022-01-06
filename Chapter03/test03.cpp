#include <iostream>

int main_t3()
{
	using namespace std;
	const int Minutes_per_degree = 60;
	const int Seconds_per_minute = 60;

	cout << "Enter a latitude in degrees, minutes, and seconds:\n";
	cout << "First, enter the degrees: ";
	int degrees{};
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	int minutes{};
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	int seconds{};
	cin >> seconds;

	double degrees_result = degrees * 1.0 + minutes * 1.0 / Minutes_per_degree
		+ seconds * 1.0 / (Minutes_per_degree * Seconds_per_minute);

	cout << degrees << " degrees, " << minutes << " minutes, "
		<< seconds << " seconds = " << degrees_result << " degrees\n";
	return 0;
}

/*
Enter a latitude in degrees, minutes, and seconds:
First, enter the degrees: 37
Next, enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/