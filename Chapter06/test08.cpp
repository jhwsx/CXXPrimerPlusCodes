#include <iostream>
#include <fstream> // for file I/O
#include <cstdlib> // for exit() ����
int main_test08()
{
	const int SIZE = 60;
	using namespace std;
	// �Ȼ�ȡҪ��ȡ���ļ�
	char filename[SIZE];
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	// ���� ifstream ����
	ifstream inFile;
	inFile.open(filename);
	// ����ļ��Ƿ�򿪳ɹ�
	if (!inFile.is_open())
	{
		cout << "Cannot open the file " << filename << endl;
		exit(EXIT_FAILURE);
	}
	// ��ȡ�ļ��е��ַ�
	char ch;
	int count = 0;
	inFile.get(ch);
	while (inFile.good())
	{
		count++;
		inFile.get(ch);
	}
	// ϸ�ֽ�����ȡԭ��
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
	cout << filename << " contains " << count << " characters.\n";
	inFile.close();
	return 0;
}
/*
Enter name of data file: scores.txt
End of file reached.
scores.txt contains 45 characters.
*/