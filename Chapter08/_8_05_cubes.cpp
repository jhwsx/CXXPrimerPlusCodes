// �Ƚϳ�����������ò���
#include <iostream>

double cube(double a);
double refcube(double& ra);
double constrefcube(const double& cra);
int main_05()
{
	using namespace std;
	double x = 3.0;

	cout << cube(x);
	cout << " = cube of " << x << endl;
	cout << refcube(x);
	cout << " = cube of " << x << endl;

	double y = 3.0;
	cout << constrefcube(y);
	cout << " = cube of " << y << endl;

	double z = 2.0;
	cube(z + 2); // OK
	// refcube(z + 2); // ���뱨�� z + 2 ����һ�� double ���͵ı���
	constrefcube(z + 2); // OK, ���������� const ����ʱ��C++ ������һ����ʱ������

	// ��ֵ���� &
	// ��ֵ���� &&
	double&& rref = std::sqrt(2);
	double j = 15.0;
	double&& jref = 2.0 * j + 18.5;
	cout << "rref = " << rref << endl;
	cout << "jref = " << jref << endl;

	double side = 3.0;
	double* pd = &side;
	double& rd = side;
	long edge = 5L;
	double lens[4] = {2.0, 5.0, 10.0, 12.0};
	// ��Щ���ô�����ʱ����
	constrefcube(side);
	constrefcube(lens[2]);
	constrefcube(rd);
	constrefcube(*pd);
	// ��Щ�ᴴ����ʱ����
	constrefcube(edge);
	constrefcube(7.0);
	constrefcube(side + 10.0);
	return 0;
}

double cube(double a)
{
	a *= a * a;
	return a;
}

double refcube(double& ra)
{
	ra *= ra * ra; // �޸������õ�ֵ�������޸��� x ��ֵ�ˡ�
	return ra;
}
double constrefcube(const double& cra) // �������޸����ò���
{
	return cra * cra * cra;
}
/*
27 = cube of 3
27 = cube of 27
27 = cube of 3
rref = 1.41421
jref = 48.5
*/