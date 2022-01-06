// ʹ�� clock() ��ͷ�ļ� ctime �������ӳ�ѭ��
#include <iostream>
#include <ctime> // ���� clock() ������clock_t ����
int main_14()
{
	using namespace std;
	cout << "Enter the delay time, in seconds: ";
	int secs;
	cin >> secs;
	// clock_t �����ͱ���
	clock_t delay = secs * CLOCKS_PER_SEC; // ������ת����ϵͳʱ�䵥λ
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "done \a\n";

	// �������ͱ���
	typedef char byte; // �� char ������һ������Ϊ byte
	byte ch = 'a';
	cout << "ch = " << byte(ch) << endl;

	typedef float* float_pointer;
	float f = 1.55f;
	float_pointer fp = &f;
	cout << "f = " << *fp << endl;
	return 0;
}
/*
Enter the delay time, in seconds: 10
starting
done
ch = a
f = 1.55
*/