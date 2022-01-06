// ʹ��ѭ�������㲢�洢ǰ 16 ���׳�
// һ���������Ľ׳ˣ�factorial��������С�ڼ����ڸ������������Ļ�������0�Ľ׳�Ϊ1����Ȼ��n�Ľ׳�д��n!��1808�꣬��˹�١��������������ʾ����
// �༴n! = 1��2��3��...��(n - 1)��n���׳�����Եݹ鷽ʽ���壺0! = 1��n! = (n - 1)!��n��
#include <iostream>
const int ArSize = 16; // �ⲿ����

int main_4()
{
	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < ArSize; i++)
	{
		factorials[i] = i * factorials[i - 1];
	}
	for (int i = 0; i < ArSize; i++)
	{
		std::cout << i << "! = " << factorials[i] << std::endl;
	}
	return 0;
}
/*
0! = 1
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
6! = 720
7! = 5040
8! = 40320
9! = 362880
10! = 3628800
11! = 39916800
12! = 479001600
13! = 6227020800
14! = 87178291200
15! = 1307674368000
*/