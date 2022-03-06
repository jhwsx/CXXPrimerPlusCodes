#include <iostream>

using namespace std;
const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int size);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);
int main_test09()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done.\n";
	return 0;
}

int getinfo(student pa[], int size)
{
	int i;
	int count = 0;
	for (i = 0; i < size; i++)
	{
		cout << "Enter student #" << i << " fullname: ";
		cin.get(pa[i].fullname, SLEN).get();
		if (pa[i].fullname[0] == '\0') 
		{
			cout << "a blank line, exit getinfo" << endl;
			break;
		}
		cout << "Enter student #" << i << " hobby: ";
		cin.get(pa[i].hobby, SLEN).get();
		cout << "Enter student #" << i << " ooplevel: ";
		cin >> pa[i].ooplevel;
		cin.get();
		count++;
	}
	return count;
}

void display1(student st)
{
	cout << "fullname: " << st.fullname << ", hobby: " 
		<< st.hobby << ", ooplevel: " << st.ooplevel << endl;
}

void display2(const student* ps)
{
	cout << "fullname: " << ps->fullname << ", hobby: "
		<< ps->hobby << ", ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "fullname: " << pa[i].fullname << ", hobby: "
			<< pa[i].hobby << ", ooplevel: " << pa[i].ooplevel << endl;
	}
}
/*
Enter class size: 3
Enter student #0 fullname: wzc
Enter student #0 hobby: pingpong
Enter student #0 ooplevel: 3
Enter student #1 fullname: zcc
Enter student #1 hobby: sing
Enter student #1 ooplevel: 2
Enter student #2 fullname: wjq
Enter student #2 hobby: cry
Enter student #2 ooplevel: 1
fullname: wzc, hobby: pingpong, ooplevel: 3
fullname: wzc, hobby: pingpong, ooplevel: 3
fullname: zcc, hobby: sing, ooplevel: 2
fullname: zcc, hobby: sing, ooplevel: 2
fullname: wjq, hobby: cry, ooplevel: 1
fullname: wjq, hobby: cry, ooplevel: 1
fullname: wzc, hobby: pingpong, ooplevel: 3
fullname: zcc, hobby: sing, ooplevel: 2
fullname: wjq, hobby: cry, ooplevel: 1
Done.
*/