// ͨ������һ������������д���ļ�����ʾ����Ļ��
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void file_it(ostream& os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main_08()
{
	ofstream fout;
	// ��һ���ļ�
	const char* fn = "ep-data.txt";
	fout.open(fn);
	if (!fout.is_open())
	{
		cout << "Can't open" << fn << ". Bye.\n";
		exit(EXIT_FAILURE);
	}
	// ���� ��Զ[��]�ﾵ�Ľ���
	double objective;
	cout << "Enter the focal length of your "
		<< "telescope objective in mm: ";
	cin >> objective;
	// ����һ��Ŀ���Ľ�������
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
// ����ʹ�û���ʹ����Ϊ�βΣ����Խ������������������Ϊʵ�Ρ�
// ���� os ����ָ�� cout��������ָ�� fout��
void file_it(ostream& os, double fo, const double fe[], int n)
{
	ios_base::fmtflags initial;
	// �����ʼ�ĸ�ʽ��״̬
	initial = os.setf(ios_base::fixed); // os.setf(ios_base::fixed) ��ʾ���������ڶ����ʾ����ģʽ��
	os.precision(0);
	os << "Focal length of objective: " << fo << " mm\n";
	os.setf(ios::showpoint); // ��ʾ������������ʾС�����ģʽ
	os.precision(2); // ��ʾָ����ʾ��С��λ��
	os.width(12); // ������һ���������ʹ�õ��ֶο��
	os << "f.l. eyepiece";
	os.width(15);
	os << "magnification" << endl;
	for (int i = 0; i < n; i++)
	{
		os.width(12);
		os << fe[i];
		os.width(15);
		// ����Ŵ���
		os << int(fo / fe[i] + 0.5) << endl;
	}
	// �ָ���ʼ�ĸ�ʽ��״̬
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