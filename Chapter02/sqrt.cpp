// 2.4 ʹ�� sqrt ����
#include <iostream>
#include <cmath> // for sqrt��ͨ������ͷ�ļ� cmath(�����涨���� sqrt ����ԭ��)�����ṩ�� sqrt ��ԭ���ˡ�

int main4()
{
	using namespace std;

	double area;
	cout << "Enter the floor area, in square feet, of your home: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "That's the equivalent of a square " << side
		<< " feet to the side." << endl;
	cout << "How fascinating!" << endl;

	double pow_result = pow(2.0, 4.0); // 2 �� 4 �η���
	cout << "pow_result: " << pow_result << endl;
	int rand_value = rand();
	cout << "rand_value: " << rand_value << endl;
	return 0;
}