// �ṩ�������壬�ṩ����ԭ�ͣ����ú�����
#include <iostream>

void simple(); // ����ԭ��

int main_01()
{
	using namespace std;
	cout << "main() will call the simple() function:\n";
	simple(); // ��������
	cout << "main() is finished with the simple() function.\n";
	return 0;
}
// ��������
void simple()
{
	using std::cout;
	cout << "I'm but a simple function.\n";
}
/*
main() will call the simple() function:
I'm but a simple function.
main() is finished with the simple() function.
*/