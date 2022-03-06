// 模板的显式具体化
#include <iostream>

template<typename T>
void Swap3(T &a, T &b);

struct job
{
	char name[40];
	double salary;
	int floor;
};

// 这个就是显式具体化，声明和定义都要以 template<> 打头。
template<> void Swap3<job>(job &j1, job &j2);
void Show(job& j);

int main_13()
{
	using namespace std;
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << endl;
	cout << "Use compiler-generated int swapper:\n";
	Swap3(i, j); // call generated void Swap(int& a, int& b); 这是隐式实例化。
	cout << "Now i, j = " << i << ", " << j << endl;

	job sue = {"sue", 12123.45, 4};
	job sidney = {"sidney", 11111.11, 5};
	cout << "Before job swapping:\n";
	Show(sue);
	Show(sidney);
	Swap3(sue, sidney);
	cout << "After job swapping:\n";
	Show(sue);
	Show(sidney);

	// 额外的代码片段 p289
	short m = 1;
	short n = 2;
	cout << "m, n = " << m << ", " << n << endl;
	Swap3(m, n); // 这是隐式实例化
	cout << "Now m, n = " << m << ", " << n << endl;
	char c1 = 'a';
	char c2 = 'b';
	cout << "c1, c2 = " << c1 << ", " << c2 << endl;
	Swap3<char>(c1, c2);
	cout << "Now c1, c2 = " << c1 << ", " << c2 << endl;
	return 0;
}

template<typename T>
void Swap3(T& a, T& b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template<>
void Swap3(job& j1, job& j2)
{
	// 不要交换名字，只交换 salary 和 floor。
	double salaryTmp;
	int floorTmp;

	salaryTmp = j1.salary;
	j1.salary = j2.salary;
	j2.salary = salaryTmp;

	floorTmp = j1.floor;
	j1.floor = j2.floor;
	j2.floor = floorTmp;
}

void Show(job& j)
{
	std::cout << "name = " << j.name << ", salary = " 
		<< j.salary << ", floor = " << j.floor << std::endl;
}
/*
i, j = 10, 20
Use compiler-generated int swapper:
Now i, j = 20, 10
Before job swapping:
name = sue, salary = 12123.5, floor = 4
name = sidney, salary = 11111.1, floor = 5
After job swapping:
name = sue, salary = 11111.1, floor = 5
name = sidney, salary = 12123.5, floor = 4
*/