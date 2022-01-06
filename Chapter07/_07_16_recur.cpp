//  π”√µ›πÈ
#include <iostream>

using namespace std;

void countdown(int n);
int level = 1;
int main_16()
{
	countdown(4);
	return 0;
}

void countdown(int n)
{
	using namespace std;
	cout << "Counting down ... " << n << " (n at " << &n << ")" << endl;
	if (n > 0)
	{
		countdown(n - 1);
	}
	cout << n << ": Kaboom!" << " (n at " << &n << ")" << endl; // Kaboom ¥Û±¨’®
}
/*
Counting down ... 4 (n at 0028FDDC) // level1
Counting down ... 3 (n at 0028FD04) // level2
Counting down ... 2 (n at 0028FC2C) // level3
Counting down ... 1 (n at 0028FB54) // level4
Counting down ... 0 (n at 0028FA7C) // level5
0: Kaboom! (n at 0028FA7C)			// level5
1: Kaboom! (n at 0028FB54)			// level4
2: Kaboom! (n at 0028FC2C)			// level3
3: Kaboom! (n at 0028FD04)			// level2
4: Kaboom! (n at 0028FDDC)			// level1
*/