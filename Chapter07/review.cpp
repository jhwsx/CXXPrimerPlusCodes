#include <iostream>

using namespace std;

struct applicant
{
	char name[30];
	int credit_ratings[3];
};

void adjust_array(int arr[], int n, int new_data);
void adjust_array(int* begin, int* end, int new_data);
void show_array(const int* begin, const int* end);
double find_max(const double arr[], int n);
int replace(char* str, char c1, char c2);
int fun1(const char* str);
int fun2(const char* str);
int judge(int (*pf)(const char*));
void show_applicant(applicant);
void show_applicant(applicant*);
void f1(applicant* a);
const char* f2(const applicant* a1, const applicant* a2);
int main_review()
{
	/*
	1.提供函数定义；提供函数原型；调用函数。
	*/
	/*
	2.
	a. void igor();
	b. float tofu(int);
	c. double mpg(double, double);
	d. long summation(long ar[], int n);
	e. double doctor(const char *);
	f. void ofcourse(boss);
	g. char* plot(map *);
	*/
	/*
	3.
	*/
	int arr[3] = {1, 2, 3};
	adjust_array(arr, 3, 4);
	show_array(arr, arr + 3);
	/*
	4.
	*/
	int arr4[4] = { -1, -2, -3, -4 };
	adjust_array(arr4, arr4 + 4, 8);
	show_array(arr4, arr4 + 4);
	/*
	5.
	*/
	double arr5[5] = {2.0, 1.0, 0.1, 5.1, 9.9};
	double max = find_max(arr5, 5);
	cout << "max = " << max << endl;
	/*
	6. 因为 const 修饰基本类型表示这些类型为常量，不能再修改或者赋值，所以不可以用来修饰函数的参数。
	*/
	/*
	7.字符串可以存储在 char 数组中，可以用带双引号的字符串来表示，也可以用指向字符串第一个字符的指针来表示。
	*/
	/*
	8.
	*/
	char arr8[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
	cout << "count: " << replace(arr8, 'l', 'm') << endl;
	/*
	9. *"pizza" 得出 'p'，"taco"[2] 得出 'c'
	*/
	const char* p = "pizza";
	cout << "*p = " << *p << endl;
	// C++ 将 "pizza" 解释为其第一个元素的地址，则 *"pizza" 得到的是第一个元素的值。
	cout << "*\"pizza\" = " << *"pizza" << endl;
	// C++ 将 "taco" 解释为其第一个元素的地址，则 "taco"[2] 得到的是索引为 2 的元素的值。
	cout << "\"taco\"[2] = " << "taco"[2] << endl;
	/*
	10.按值传递：glitz;按地址传递：&glitz。如果结构比较大，值传递发生拷贝，会损失时间。
	*/
	/*
	11.
	*/
	cout << "judge(fun1) = " << judge(fun1) << endl;
	cout << "judge(fun2) = " << judge(fun2) << endl;
	/*
	12.
	*/
	applicant a = { "wzc", {1,2,3} };
	applicant b = { "zcc", {2,4,5} };
	show_applicant(a);
	show_applicant(&b);
	/*
	13.
	*/
	void (*p1)(applicant*) = f1;
	const char* (*p2)(const applicant*, const applicant*) = f2;
	void (*ap[5])(applicant*) = {f1, f1, f1, f1, f1};
	const char* (*pa[10])(const applicant*, const applicant*) = {f2, f2, f2, f2, f2, f2, f2, f2, f2, f2};
	return 0;
}

void adjust_array(int arr[], int n, int new_data)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = new_data;
	}
}

void adjust_array(int* begin, int* end, int new_data)
{
	int* p;
	for (p = begin; p < end; p++)
	{
		*p = new_data;
	}
}

void show_array(const int* begin, const int* end)
{
	const int* p;
	cout << "[";
	for (p = begin; p < end; p++)
	{
		if (p != begin)
			cout << ", ";
		cout << *p;
	}
	cout << "]\n";
}

double find_max(const double arr[], int n)
{
	if (n < 1)
	{
		cout << "Invalid array size of " << n << endl;
		cout << "So just return a value of 0\n";
		return 0;
	}
	// arr[1] = 5; // 不可以这样的，有 const 修饰符
	double max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int replace(char* str, char c1, char c2)
{
	int count = 0;
	while (*str != '\0') // 没有到结尾的空值字符
	{
		if (*str == c1)
		{
			*str = c2;
			count++;
		}
		str++;
	}
	return count;
}

int fun1(const char* str)
{
	return 1;
}

int fun2(const char* str)
{
	return 2;
}

int judge(int(*pf)(const char*))
{
	return pf("");
}

void show_applicant(applicant a)
{
	cout << a.name << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << a.credit_ratings[i] << endl;
	}
}

void show_applicant(applicant* pa)
{
	cout << pa->name << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << pa->credit_ratings[i] << endl;
	}
}

void f1(applicant* a)
{
}

const char* f2(const applicant* a1, const applicant* a2)
{
	return nullptr;
}


