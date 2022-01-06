#include <iostream>
#include <fstream> // for file I/O
#include <cstdlib> // for exit() function

int main_16()
{
	const int SIZE = 60;
	using namespace std;
	// 先获取读取的文件
	char filename[SIZE];
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	// 创建 ifstream 对象
	ifstream inFile;
	inFile.open(filename);
	// 检查是否打开文件成功
	if (!inFile.is_open())
	{
		cout << "Cannot open the file " << filename << endl;
		exit(EXIT_FAILURE);
	}
	// 读取文件中的 double 数字
	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value; // 先获取一个值
	while (inFile.good()) // good() 判断最后一次读取输入的操作是否成功，所以要先有一次读取操作。
	{
		count++;
		sum += value;
		inFile >> value; // 循环获取值
	}
	// 展示结束原因
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
	// 展示读取的个数，和，以及平均值
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
	// 关闭流资源，不要忘记了。
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