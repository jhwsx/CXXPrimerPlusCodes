#include <iostream>
#include <fstream> // for file I/O

int main_15()
{
	using namespace std;

	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile; // �����������
	outFile.open("carinfo.txt"); // ����һ���ļ�

	cout << "Enter the make and model of automobile: ";
	cin.getline(automobile, 50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original asking price: ";
	cin >> a_price;
	d_price = 0.913 * a_price;

	// �ڿ���̨��չʾ��Ϣ
	cout << fixed; // ��ʾ��һ��ķ�ʽ���������
	cout.precision(2); // ʹ�� 2 λ����
	cout.setf(ios_base::showpoint); // ��ʾ������С����������
	cout << "Make and model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;

	// д���ļ��ˣ�ֻ�ǰ� cout ���� outFile �����ˡ�
	outFile << fixed; 
	outFile.precision(2);
	outFile.setf(ios_base::showpoint); 
	outFile << "Make and model: " << automobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << d_price << endl;

	outFile.close(); // ��Ҫ���˹ر�����Դ��
	return 0;
}

/*
Enter the make and model of automobile: Flitz Perky
Enter the model year: 2009
Enter the original asking price: 13500
Make and model: Flitz Perky
Year: 2009
Was asking $13500.00
Now asking $12325.50
*/