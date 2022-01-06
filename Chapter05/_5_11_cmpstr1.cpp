// �Ƚ�C����ַ���
#include <iostream>
#include <cstring> // �ṩ strcmp() ����ԭ��
int main_11()
{
	using namespace std;
	// ������� const����Ϊ "mate" �� const char* ���͵ġ�
	const char* word = "mate";
	// word == "mate" �ǱȽ϶����Ƿ�洢����ͬ�ĵ�ַ�ϣ������ 1������û�д洢����ͬ�ĵ�ַ�ϡ�
	// ���ԣ���ϵ������������ڱȽ�C����ַ�����
	cout << "word == \"mate\": " << (word == "mate") << endl; 

	int result = strcmp(word, "mate");
	cout << "strcmp(word, \"mate\"): " << result << endl;

	char big[80] = "Daffy";
	char little[6] = "Daffy";
	cout << "strcmp(big, little): " << strcmp(big, little) << endl;

	cout << endl;

	char w[5] = "?ate";
	for (char ch = 'a'; strcmp(w, "mate"); ch++)
	{
		cout << w << endl;
		w[0] = ch;
	}
	cout << "After loop ends, w is " << w << endl;
	return 0;
}
/*
word == "mate": 1
strcmp(word, "mate"): 0
strcmp(big, little): 0

?ate
aate
bate
cate
date
eate
fate
gate
hate
iate
jate
kate
late
After loop ends, w is mate
*/