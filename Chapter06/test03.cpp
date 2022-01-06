#include <iostream>
#include <string>

using namespace std;

void showChoices();
void showTips();
bool isValidChar(char);
string matchTarget(char);
int main_test03()
{
	showChoices();
	char ch;
	showTips();
	while (!cin.get(ch) || !isValidChar(ch))
	{
		// 查看 p188
		// 必须先重置 cin，然后才能删除错误输入。
		cin.clear(); // 如果省略这条语句，程序将拒绝继续读取输入。
		while (cin.get() != '\n')
		{
			continue; // 消除掉坏的输入
		}
		// 不是字符，或者是不是有效的字符，会进入循环
		showTips();
	}
	
	cout << "A maple is a " << matchTarget(ch) << endl;
	return 0;
}

void showChoices()
{
	cout << "Please enter one of the following choices:\n"
		<< "c) carnivore			p) pianist\n"
		<< "t) tree				g) game\n";
}

void showTips()
{
	cout << "Please enter a c, p, t, or g: ";
}

bool isValidChar(char ch)
{
	return ch == 'c' || ch == 'p' || ch == 't' || ch == 'g';
}

string matchTarget(char ch)
{
	string str = "";
	switch (ch)
	{
	case 'c':
		str = "carnivore";
		break;
	case 'p':
		str = "pianist";
		break;
	case 't':
		str = "tree";
		break;
	case 'g':
		str = "game";
		break;
	default:
		break;
	}
	return str;
}

/*
Please enter one of the following choices:
c) carnivore                    p) pianist
t) tree                         g) game
Please enter a c, p, t, or g: a
Please enter a c, p, t, or g: d
Please enter a c, p, t, or g: f
Please enter a c, p, t, or g: g
A maple is a game
*/