#include <iostream>
#include <fstream> // for file I/O

int main_15()
{
	using namespace std;

	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile; // 创建输出对象
	outFile.open("carinfo.txt"); // 关联一个文件

	cout << "Enter the make and model of automobile: ";
	cin.getline(automobile, 50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original asking price: ";
	cin >> a_price;
	d_price = 0.913 * a_price;

	// 在控制台上展示信息
	cout << fixed; // 表示用一般的方式输出浮点型
	cout.precision(2); // 使用 2 位精度
	cout.setf(ios_base::showpoint); // 显示浮点数小数点后面的零
	cout << "Make and model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;

	// 写入文件了，只是把 cout 换成 outFile 就行了。
	outFile << fixed; 
	outFile.precision(2);
	outFile.setf(ios_base::showpoint); 
	outFile << "Make and model: " << automobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << d_price << endl;

	outFile.close(); // 不要忘了关闭流资源。
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