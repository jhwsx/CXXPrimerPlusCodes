#include <iostream>

using namespace std;

void print(char * p, int n = 0);

void divider();

int main_test01()
{
	char greeting[50] = "Hello,world!";
	print(greeting);
	char congratulations[50] = "Happy new year!";
	print(congratulations, 1);
	divider();
	print(congratulations, 1);
	divider();
	print(congratulations, 1);
	return 0;
}

void print(char* p, int n)
{
	if (n == 0)
	{
		cout << p << endl;
	}
	else
	{
		static int calltimes = 0;
		calltimes++;
		for (int i = 0; i < calltimes; i++)
			cout << p << endl;
	}
}

void divider()
{
	cout << "------------------" << endl;
}
/*
Hello,world!
Happy new year!
------------------
Happy new year!
Happy new year!
------------------
Happy new year!
Happy new year!
Happy new year!
*/