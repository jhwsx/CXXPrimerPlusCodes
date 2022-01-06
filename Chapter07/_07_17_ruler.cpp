// ʹ�õݹ�ȥ�ٷָ�һ�ѳ���
#include <iostream>
const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int high, int level);

int main_17()
{
	// ���� ruler ����
	char ruler[Len];
	// ��ʼ�� ruler ����
	for (int i = 1; i < Len - 2; i++)
	{
		ruler[i] = ' ';
	}
	ruler[Len - 1] = '\0';
	int min = 0;
	int max = Len - 2;
	ruler[max] = ruler[min] = '|';
	std::cout << ruler << std::endl;
	// ��ʼ��������ÿһ�λ���
	for (int i = 1; i <= Divs; i++)
	{
		subdivide(ruler, min, max, i);
		std::cout << ruler << std::endl; // ��ӡ��
		// ���зָ���ʾ��ϣ���� ruler ���飬�Ա���һ��ʹ�á�
		for (int j = 1; j < Len - 2; j++)
		{
			ruler[j] = ' ';
		}
	}
	return 0;
}

void subdivide(char ar[], int low, int high, int level)
{
	if (level == 0)
		return;
	// ���������еݹ�
	int mid = (low + high) / 2;
	ar[mid] = '|';
	subdivide(ar, low, mid, level - 1);
	subdivide(ar, mid, high, level - 1);
}
/*
|                                                               |
|                               |                               |
|               |               |               |               |
|       |       |       |       |       |       |       |       |
|   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
| | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | |
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
*/