// 使用结构引用
#include <iostream>
#include <string>

struct free_throws
{
	std::string name;
	int made;
	int attempts;
	float percent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws& accumulate(free_throws & target, const free_throws & source);
int main_06()
{
	// 部分初始化结构，所以 percent 的值是 0
	free_throws one = {"Ifelsa Branch", 13, 14};
	free_throws two = {"Andor Knott", 10, 16};
	free_throws three = {"Minnie Max", 7, 9};
	free_throws four = {"Whily Looper", 5, 9};
	free_throws five = {"Long Long", 6, 14};
	free_throws team = {"Throwgoods", 0, 0};
	// 完全未初始化的结构
	free_throws dup;

	set_pc(one);
	display(one);
	accumulate(team, one);
	display(team);
	// 使用返回值作为参数
	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);
	dup = accumulate(team, five);
	std::cout << "Displaying team:\n";
	display(team);
	std::cout << "Displaying dup after assignment:\n";
	display(dup);
	set_pc(four);
	accumulate(dup, five) = four;
	std::cout << "Displaying dup after ill-advised assignment:\n";
	display(dup);
	return 0;
}
// 显示结构的内容，所以使用常量引用参数，不可以修改传入的结构。
void display(const free_throws& ft)
{
	using std::cout;
	cout << "Name: " << ft.name << '\n';
	cout << " Made: " << ft.made << '\t';
	cout << "Attempts: " << ft.attempts << '\t';
	cout << "Percent: " << ft.percent << '\n';
}
// 设置结构的值，所以使用一般的引用参数，可以修改传入的结构
void set_pc(free_throws& ft)
{
	if (ft.attempts != 0)
		ft.percent = 100.f * float(ft.made) / float(ft.attempts);
	else
		ft.percent = 0;
}
// 接收一个一般引用参数和一个常量引用参数，返回一个引用
free_throws& accumulate(free_throws& target, const free_throws& source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}
/*
Name: Ifelsa Branch
 Made: 13       Attempts: 14    Percent: 92.8571
Name: Throwgoods									// 打印汇总1
 Made: 13       Attempts: 14    Percent: 92.8571
Name: Throwgoods									// 打印汇总1和2
 Made: 23       Attempts: 30    Percent: 76.6667
Name: Throwgoods									// 打印汇总1,2,3,4
 Made: 35       Attempts: 48    Percent: 72.9167
Displaying team:									// 打印汇总1,2,3,4,5
Name: Throwgoods
 Made: 41       Attempts: 62    Percent: 66.129
Displaying dup after assignment:					// 在赋值后，打印 dup
Name: Throwgoods
 Made: 41       Attempts: 62    Percent: 66.129
Displaying dup after ill-advised assignment:		// 在不推荐的赋值后，打印 dup
Name: Whily Looper
 Made: 5        Attempts: 9     Percent: 55.5556
*/

