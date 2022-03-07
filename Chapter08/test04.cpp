#include <iostream>
#include <cstring> // for strlen(), strcpy()

using namespace std;
struct stringy
{
	char* str;
	int ct;
};

void set(stringy & sy, char str[]);

void show(const stringy& sy, int times = 1);
void show(const char* str, int times = 1);

int main_test04()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany, 2);

	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}

void set(stringy& sy, char str[])
{
	sy.str = str;
	sy.ct = strlen(str);
}

void show(const stringy& sy, int times)
{
	for (int i = 0; i < times; i++)
		cout << sy.str << " " << sy.ct << endl;
}

void show(const char* str, int times)
{
	for (int i = 0; i < times; i++)
		cout << str << endl;
}
/*
Reality isn't what it used to be. 33
Reality isn't what it used to be. 33
Reality isn't what it used to be. 33
Duality isn't what it used to be.
Duality isn't what it used to be.
Duality isn't what it used to be.
Duality isn't what it used to be.
Done!
*/