// 共用体
#include <iostream>
#include <cstring>

struct widget
{
	char brand[20];
	int type;
	union id
	{
		long id_num;
		char id_char[20];
	} id_val;
};

void printWidget(widget& w)
{
	using namespace std;
	cout << "brand = " << w.brand << ", ";
	if (w.type == 1)
	{
		cout << "id_num = " << w.id_val.id_num;
	}
	else
	{
		cout << "id_char = " << w.id_val.id_char;
	}
	cout << endl;
}

int main_union()
{
	widget prize =
	{
		"dell",
		1,
		{
			1234567
		}
	};
	printWidget(prize);
	// 这种报错
	/*widget prize2 =
	{
		"hp",
		2,
		{
			"abcdefg"
		}
	};*/
	widget prize3;
	strcpy_s(prize3.brand, "hp");
	prize3.type = 2;
	strcpy_s(prize3.id_val.id_char, "abcdefg");
	printWidget(prize3);
	return 0;
}
/*
brand = dell, id_num = 1234567
brand = hp, id_char = abcdefg
*/