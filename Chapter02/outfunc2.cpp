// 2.5 �����Լ��ĺ���
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void simon2(int); // ��������ԭ�ͣ�����ͷ
int main5_2()
{
	simon2(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon2(count);
	cout << "Done!" << endl;

	return 0;
}

void simon2(int n)
{
	cout << "Simon says touch your toes " << n << " times." << endl;
}
