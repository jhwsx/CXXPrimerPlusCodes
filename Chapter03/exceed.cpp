// 3.2 ����һЩ����������
#include <iostream>
#define ZERO 0
#include <climits> // �����������������Ϣ������
int main2()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited. " << endl
		<< "Add $1 to each accout." << endl << "Now ";
	sam = sam + 1; // Խ��
	sue = sue + 1; // ����Խ��
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited. \nPoor Sam!" << endl;

	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each account." << endl << "Now ";
	sam = sam - 1; // ����Խ��
	sue = sue - 1; // Խ��
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
	return 0;
}

/*
Sam has 32767 dollars and Sue has 32767 dollars deposited.
Add $1 to each accout.
Now Sam has -32768 dollars and Sue has 32768 dollars deposited.
Poor Sam!
Sam has 0 dollars and Sue has 0 dollars deposited.
Take $1 from each account.
Now Sam has -1 dollars and Sue has 65535 dollars deposited.
Lucky Sue!
*/