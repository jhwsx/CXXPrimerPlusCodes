// ��תһ������
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
	// �������޸� string ����
	for (i = 0,/*������б�ָ���*/ j = word.size() - 1; i < j; i++,/*����Ƕ��������*/ j--) /*������������������ʽ�ϲ���һ��*/
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