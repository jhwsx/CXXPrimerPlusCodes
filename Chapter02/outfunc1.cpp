// 2.5 �����Լ��ĺ���
#include <iostream>
using namespace std;
void simon1(int); // ��������ԭ�ͣ�����ͷ
int main5_1()
{
	simon1(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon1(count);
	cout << "Done!" << endl;

	return 0;
}

void simon1(int n)
{
	cout << "Simon says touch your toes " << n << " times." << endl;
}
