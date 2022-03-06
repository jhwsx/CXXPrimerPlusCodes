// ���ؽ�����Ѱ����ƥ��ĺ���
#include<iostream>

// ������ʽ�������ݵ�ģ�嶨��
// ģ��A���������ݵ����������Ҫ��ʾ������
template <typename T>
void ShowArray(T arr[], int n);

// ģ��B����������Ԫ����ָ�룬ָ��Ҫ��ʾ������
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

	// ����ָ���� mr_E �����нṹԪ�ص� amount ��ָ�롣
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	cout << "Listing Mr. E's counts of things:\n";
	ShowArray(things, 6); // ʹ��ģ�� A
	cout << "Listing Mr. E's debts:\n";
	ShowArray(pd, 3); // ���ƥ��ģ�� B, ����ʹ��ģ�� B�����û��ģ�� B��ֻ��ģ�� A����ô�ͻ�ʹ��ģ�� A��
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