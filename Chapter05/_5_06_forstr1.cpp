// �� string ʹ�� for ѭ��
#include <iostream>
#include <string>
#include <cstring>
int main_06()
{
	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;

	cout << "string size: " << word.size() << endl; // ���������ַ�
	// cout << "string strlen: " << strlen(word) << endl; // ����������д������

	// ������� word
	for (int i = word.size() - 1; i >= 0; i--)
	{
		cout << word[i];
	}
	cout << "\nBye.\n";
	return 0;
}
/*
Enter a word: world
string size: 5
dlrow
Bye.
*/