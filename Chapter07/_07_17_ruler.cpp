// 使用递归去再分割一把尺子
#include <iostream>
const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int high, int level);

int main_17()
{
	// 创建 ruler 数组
	char ruler[Len];
	// 初始化 ruler 数组
	for (int i = 1; i < Len - 2; i++)
	{
		ruler[i] = ' ';
	}
	ruler[Len - 1] = '\0';
	int min = 0;
	int max = Len - 2;
	ruler[max] = ruler[min] = '|';
	std::cout << ruler << std::endl;
	// 开始遍历进行每一次划分
	for (int i = 1; i <= Divs; i++)
	{
		subdivide(ruler, min, max, i);
		std::cout << ruler << std::endl; // 打印行
		// 本行分割显示完毕，清空 ruler 数组，以便下一行使用。
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
	// 这里面会进行递归
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