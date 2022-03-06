#include <iostream>

using namespace std;

struct box
{
	char marker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show_box(box b);
void show_box(box* pb);

int main_test03()
{
	box b = {"box_1", 10, 20, 30, 6000};
	show_box(b);
	show_box(&b);
	return 0;
}

void show_box(box b)
{
	cout << "marker = " << b.marker << endl;
	cout << "height = " << b.height << endl;
	cout << "width = " << b.width << endl;
	cout << "length = " << b.length << endl;
	cout << "volume = " << b.volume << endl;
}

void show_box(box* pb)
{
	cout << "marker = " << pb->marker << endl;
	cout << "height = " << pb->height << endl;
	cout << "width = " << pb->width << endl;
	cout << "length = " << pb->length << endl;
	pb->volume = pb->height * pb->width * pb->length;
	cout << "volume = " << pb->volume << endl;
}
