// 4.2 �������д洢�ַ���
#include <iostream>
#include <cstring> // for the strlen() ����

int main2()
{
	using namespace std;
	const int Size = 15;
	char name1[Size]; 
	char name2[Size] = "C++owboy";

	cout << "Howdy! I'm " << name2;
	cout << "! What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n"; // strlen(name1) �õ����Ǵ洢�������е��ַ����ĳ��ȣ����������ַ�����
	cout << "in an array of " << sizeof(name1) << " bytes.\n"; // sizeof(name1) �ó�������������ĳ���
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0'; // ������Ϊ 3 ���ַ���Ϊ�˿��ַ��ˣ����� name2 ��Ӧ���ַ������� C++ �ˡ�
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;

	return 0;
}
/*
Howdy! I'm C++owboy! What's your name?
Basicman
Well, Basicman, your name has 8 letters and is stored
in an array of 15 bytes.
Your initial is B.
Here are the first 3 characters of my name: C++
*/