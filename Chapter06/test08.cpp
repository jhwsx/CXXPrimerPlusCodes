#include <iostream>
#include <fstream> // for file I/O
#include <cstdlib> // for exit() 函数
int main_test08()
{
	const int SIZE = 60;
	using namespace std;
	// 先获取要读取的文件
	char filename[SIZE];
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	// 创建 ifstream 对象
	ifstream inFile;
	inFile.open(filename);
	// 检查文件是否打开成功
	if (!inFile.is_open())
	{
		cout << "Cannot open the file " << filename << endl;
		exit(EXIT_FAILURE);
	}
	// 读取文件中的字符
	char ch;
	int count = 0;
	inFile.get(ch);
	while (inFile.good())
	{
		count++;
		inFile.get(ch);
	}
	// 细分结束读取原因
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