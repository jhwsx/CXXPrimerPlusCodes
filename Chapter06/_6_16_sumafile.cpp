#include <iostream>
#include <fstream> // for file I/O
#include <cstdlib> // for exit() function

int main_16()
{
	const int SIZE = 60;
	using namespace std;
	// �Ȼ�ȡ��ȡ���ļ�
	char filename[SIZE];
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	// ���� ifstream ����
	ifstream inFile;
	inFile.open(filename);
	// ����Ƿ���ļ��ɹ�
	if (!inFile.is_open())
	{
		cout << "Cannot open the file " << filename << endl;
		exit(EXIT_FAILURE);
	}
	// ��ȡ�ļ��е� double ����
	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value; // �Ȼ�ȡһ��ֵ
	while (inFile.good()) // good() �ж����һ�ζ�ȡ����Ĳ����Ƿ�ɹ�������Ҫ����һ�ζ�ȡ������
	{
		count++;
		sum += value;
		inFile >> value; // ѭ����ȡֵ
	}
	// չʾ����ԭ��
	if (inFile.eof())
	{
		cout << "End of file reached.\n";
	}
	else if (inFile.fail())
	{
		cout << "Input terminated by data mismatch.\n";
	}
	else
	{
		cout << "Input terminated by unknown reason.\n";
	}
	// չʾ��ȡ�ĸ������ͣ��Լ�ƽ��ֵ
	if (count == 0)
	{
		cout << "No data processed.\n";
	}
	else
	{
		cout << "Item read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	// �ر�����Դ����Ҫ�����ˡ�
	inFile.close();
	return 0;
}

/*
Enter name of data file: scores.txt
End of file reached.
Item read: 11
Sum: 187
Average: 17
*/