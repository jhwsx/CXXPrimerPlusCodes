// 4.22 Ê¹ÓÃ delete ÔËËã·û
#include <iostream>
#include <cstring>

using namespace std;

char* getname(void);
int main_22()
{
	char* name;

	name = getname();
	cout << name << " at " << (int*)name << endl;
	delete[] name;

	name = getname();
	cout << name << " at " << (int*)name << endl;
	delete[] name;

	return 0;
}

char* getname()
{
	char temp[80];
	cout << "Enter last name: ";
	cin >> temp;
	int len = strlen(temp) + 1;
	char* pn = new char[len];
	strcpy_s(pn, len, temp);

	return pn;
}
/*
Enter last name: Fredeldumpkin
Fredeldumpkin at 0073EA10
Enter last name: Pook
Pook at 0073FD60
*/