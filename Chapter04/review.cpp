#include <iostream>
#include <string>
#include <vector> // STL C++98
#include <array> // C++11
int main_review()
{
	using namespace std;
	/*
	1.
	*/
	char actor[30];
	short betsie[100];
	float chuck[13];
	long double dipsea[64];
	/*
	2.
	*/
	array<char, 30> a_actor; // array 在 std 命名空间下
	array<short, 100> a_betsie;
	array<float, 13> a_chuck;
	array<long double, 64> a_dipsea;
	/*
	3.
	*/
	int a_int_3[5] = {1, 3, 5, 7, 9};
	/*
	4.
	*/
	int even = a_int_3[0];
	even = a_int_3[2];
	/*
	5.
	*/
	float ideas[3] = { 1.2f, 2.3f, 3.4f };
	cout << "ideas[1] = " << ideas[1] << endl;
	/*
	6.
	*/
	char cb[] = "cheeseburger";
	cout << "cb = " << cb << ", strlen(cb) = " << strlen(cb) << ", sizeof(cb) = " << sizeof(cb) << endl;
	/*
	7.
	*/
	string str = "WaldorfSalad";
	cout << "str = " << str << endl;
	/*
	8.
	*/
	struct fish
	{
		char breed[20];
		int weight;
		float length;
	};
	/*
	9.
	*/
	fish f = {"shark", 35273, 78.23f};
	cout << "fish: breed=" << f.breed << ", weight=" << f.weight << ", length=" << f.length << endl;
	/*
	10.
	*/
	enum Response
	{
		Yes = 1, No = 0, Maybe = 3
	};
	/*
	11.
	*/
	double ted = 99.9999;
	double* pted = &ted;
	cout << "ted=" << *pted << endl;
	/*
	12.
	*/
	float treacle[10] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 10.10f};
	float* pt = treacle;
	cout << "treacle[0]=" << *pt << ", treacle[9]=" << *(pt + 9) << endl;
	/*
	13.
	*/
	cout << "Enter the size of an int array: ";
	int n;
	cin >> n;
	int* int_array_new = new int[n];
	vector<int> int_array_vector(n);

	delete[] int_array_new;
	/*
	14. 有效
	*/
	cout << (int*)"Home of jolly bytes" << endl;
	/*
	15.
	*/
	fish* pf = new fish;
	strcpy_s(pf->breed, "catfish");
	pf->weight = 20;
	pf->length = 10.5f;
	cout << "breed=" << pf->breed << ", weight=" 
		<< (*pf).weight << ", length=" << pf->length << endl;
	/*
	16.
	*/
	cout << "What year was your house built?\n";
	int year;
	cin >> year;
	// 不加此行：没有机会输入地址字符串；加此行：就可以输入地址字符串了。
	cin.get();
	cout << "What is its street address?\n";
	char address[80];
	// cin.getline(address, 80);
	cin >> address; // 这样会以空白字符作为结束，不会读取整行的。
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";
	/*
	17.
	*/
	const int num = 10;
	std::vector<string> arr1 = { "hi", "how", "is", "it", "going", "nice", "to", "meet", "you", "too" };
	std::array<string, num> arr2 = {"hi", "how", "is", "it", "going", "nice", "to", "meet", "you", "too"};
	return 0;
}