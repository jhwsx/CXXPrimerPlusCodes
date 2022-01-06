// 4.20 ���ַ���ʹ��ָ��
#include <iostream>
#include <string>
#include <cstring> // c string library, for strcpy strlen

int main20()
{
	using namespace std;
	char animal[20] = "bear"; // animal ���������ַ��� bear
	const char* bird = "wren"; // bird �������� "wren" �ַ����ĵ�ַ
	char* ps;

	cout << animal << " and ";
	cout << bird << "\n";
	// cout << ps << "\n"; // ����uninitialized local variable 'ps' used

	cout << "Enter a kind of animal: ";
	cin >> animal; // ʹ���������������룬��Ҫʹ��ָ�����������롣

	ps = animal; // ���� ps ָ���ַ���
	cout << ps << "\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int*)animal << " " << &animal << endl; // Ϊ�˴�ӡ��ַ���� animal ǿ��תΪ double*, ���� int*��������char*
	cout << ps << " at " << (int*)ps << " " << &ps << endl;
	
	ps = new char[strlen(animal) + 1]; // strlen ���������ַ�����ȡ�µ��ڴ�ռ�
	strcpy_s(ps, strlen(animal) + 1, animal); // �����ַ������µ��ڴ�ռ�
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;

	delete[] ps;
	return 0;
}

/*
bear and wren
Enter a kind of animal: tiger
tiger
Before using strcpy():
tiger at 004FF8D4 004FF8D4
tiger at 004FF8D4 004FF8BC
After using strcpy():
tiger at 004FF8D4
tiger at 0086F8F0
*/