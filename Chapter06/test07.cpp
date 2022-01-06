#include <iostream>
#include <cstring>

int main_test07()
{
	const int ArSize = 20;
	using namespace std;
	cout << "Enter words (q to quit): \n";
	char word[ArSize];
	cin >> word;
	// ������
	int vowels = 0; // ͳ��Ԫ����ͷ�ĵ���
	int consonants = 0; // ͳ�Ƹ�����ͷ�ĵ���
	int others = 0;
	while (strcmp(word, "q"))
	{ 
		// cout << word << endl;
		char firstchar = word[0];
		if (isalpha(firstchar)) // �ǲ�����ĸ��ͷ�ĵ���
		{

			switch (word[0])
			{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				vowels++;
				break;
			default:
				consonants++;
				break;
			}
		}
		else
		{
			others++;
		}
		cin >> word;
	}
	cout << vowels << " words beginning with vowels\n";
	cout << consonants << " words beginning with consonants\n";
	cout << others << " others\n";
	return 0;
}
/*
Enter words (q to quit):
The 12 awesome oxen ambled
quietly across 15 meters of lawn. q
5 words beginning with vowels
4 words beginning with consonants
2 others
*/