// 4.7 ʹ�� C++ string ��
#include <iostream>
#include <string>

int main7()
{
	using namespace std;
	char charr1[20]; // ����һ��������
	char charr2[20] = "jaguar"; // ����һ����ʼ��������
	string str1; // ����һ���յ� string ����
	string str2 = "panther"; // ����һ����ʼ���� string ����
	cout << "charr1 length: " << strlen(charr1) << endl; // ������ȡû�����塣
	cout << "str1 length:" << str1.size() << endl; // ��ȡΪ0

	cout << "Enter a kind of feline: ";
	cin >> charr1;
	cout << "Enter another kind of feline: ";
	cin >> str1;
	cout << "Here are some felines:\n";
	cout << charr1 << " " << charr2 << " "
		<< str1 << " " << str2 << endl;
	cout << "The third letter in " << charr2 << " is "
		<< charr2[2] << endl;
	cout << "The third letter in " << str2 << " is "
		<< str2[2] << endl;

	// �� string ��ʹ���б��ʼ��
	char first_date[] = {"rice"};
	char second_date[]{ "noodles" };
	string third_date = {"meat"};
	string fourth_date{"cake"};
	return 0;
}

/*
charr1 length: 35
str1 length:0
Enter a kind of feline: ocelot
Enter another kind of feline: tiger
Here are some felines:
ocelot jaguar tiger panther
The third letter in jaguar is g
The third letter in panther is n
*/