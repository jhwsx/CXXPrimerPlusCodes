#include <iostream>
#include <string>

int main_test09()
{
	using namespace std;
	cout << "Enter words (to stop, type the word done):\n";
	string word;
	int counter = 0;
	while (word != "done")
	{
		cin >> word;
		cout << "word: " << word << endl;
		counter++;
	}
	cout << "You enter a total of " << counter - 1 << " words" << endl;
	return 0;
}
/*
Enter words (to stop, type the word done):
anteater birthday category dumpster
word: anteater
word: birthday
word: category
word: dumpster
envy finagle geometry done for sure
word: envy
word: finagle
word: geometry
word: done
You enter a total of 7 words
*/