// 重载解析会寻找最匹配的函数
#include<iostream>

// 用于显式数组内容的模板定义
// 模板A：参数传递的数组包含了要显示的数据
template <typename T>
void ShowArray(T arr[], int n);

// 模板B：假设数组元素是指针，指向要显示的数据
template <typename T>
void ShowArray(T* arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main_14()
{
	using namespace std;
	int things[6] = {13, 31, 103, 301, 310, 130};
	struct debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double* pd[3];

	// 设置指向了 mr_E 数组中结构元素的 amount 的指针。
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	cout << "Listing Mr. E's counts of things:\n";
	ShowArray(things, 6); // 使用模板 A
	cout << "Listing Mr. E's debts:\n";
	ShowArray(pd, 3); // 最佳匹配模板 B, 所以使用模板 B；如果没有模板 B，只有模板 A，那么就会使用模板 A。
	return 0;
}

template<typename T>
void ShowArray(T arr[], int n)
{
	using namespace std;
	cout << "template A\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

template<typename T>
void ShowArray(T* arr[], int n)
{
	using namespace std;
	cout << "template B\n";
	for (int i = 0; i < n; i++)
		cout << *arr[i] << ' ';
	cout << endl;
}

/*
Listing Mr. E's counts of things:
template A
13 31 103 301 310 130
Listing Mr. E's debts:
template B
2400 1300 1800
*/