// 通过调用一个函数将数据写入文件和显示到屏幕上
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void file_it(ostream& os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main_08()
{
	ofstream fout;
	// 打开一个文件
	const char* fn = "ep-data.txt";
	fout.open(fn);
	if (!fout.is_open())
	{
		cout << "Can't open" << fn << ". Bye.\n";
		exit(EXIT_FAILURE);
	}
	// 输入 望远[镜]物镜的焦距
	double objective;
	cout << "Enter the focal length of your "
		<< "telescope objective in mm: ";
	cin >> objective;
	// 声明一个目镜的焦距数组
	double eps[LIMIT];
	cout << "Enter the focal lengths, in mm, of " << LIMIT << " eyepieces:\n";
	for (int i = 0; i < LIMIT; i++)
	{
		cout << "Eyepiece #" << i + 1 << ": ";
		cin >> eps[i];
	}
	file_it(fout, objective, eps, LIMIT);
	file_it(cout, objective, eps, LIMIT);
	cout << "Done.\n";
	return 0;
}
// 这里使用基类使用作为形参，可以接收它的派生类对象作为实参。
// 参数 os 可以指向 cout，还可以指向 fout。
void file_it(ostream& os, double fo, const double fe[], int n)
{
	ios_base::fmtflags initial;
	// 保存初始的格式化状态
	initial = os.setf(ios_base::fixed); // os.setf(ios_base::fixed) 表示将对象置于定点表示法的模式。
	os.precision(0);
	os << "Focal length of objective: " << fo << " mm\n";
	os.setf(ios::showpoint); // 表示将对象置于显示小数点的模式
	os.precision(2); // 表示指定显示的小数位数
	os.width(12); // 设置下一次输出操作使用的字段宽度
	os << "f.l. eyepiece";
	os.width(15);
	os << "magnification" << endl;
	for (int i = 0; i < n; i++)
	{
		os.width(12);
		os << fe[i];
		os.width(15);
		// 计算放大倍数
		os << int(fo / fe[i] + 0.5) << endl;
	}
	// 恢复初始的格式化状态
	os.setf(initial);
}
/*
Enter the focal length of your telescope objective in mm: 1800
Enter the focal lengths, in mm, of 5 eyepieces:
Eyepiece #1: 18
Eyepiece #2: 4
Eyepiece #3: 7
Eyepiece #4: 10
Eyepiece #5: 2
Focal length of objective: 1800 mm
f.l. eyepiece  magnification
		18.0            100
		 4.0            450
		 7.0            257
		10.0            180
		 2.0            900
Done.
*/