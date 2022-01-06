// 反转一个数组
#include <iostream>
#include <string>

int main_9()
{
	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;
	char temp;
	int i;
	int j;
	// 根本上修改 string 对象
	for (i = 0,/*这个是列表分隔符*/ j = word.size() - 1; i < j; i++,/*这个是逗号运算符*/ j--) /*逗号运算符将两个表达式合并成一个*/
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\nDone\n";

	int cats = (17, 240);
	cout << "cats = " << cats << endl;
	return 0;
}
/*
Enter a word: stressed
desserts
Done
cats = 240
*/