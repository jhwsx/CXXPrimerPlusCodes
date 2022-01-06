#include <iostream>

using namespace std;

void print_three_blind_mice();
void see_how_they_run();
int main_t3()
{
	print_three_blind_mice();
	print_three_blind_mice();

	see_how_they_run();
	see_how_they_run();

	return 0;
}

void print_three_blind_mice()
{
	cout << "Three blind mice" << endl;
}

void see_how_they_run()
{
	cout << "See how they run" << endl;
}
