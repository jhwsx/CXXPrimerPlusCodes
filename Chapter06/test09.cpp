#include <iostream>
#include <string>
#include <vector>
#include <fstream> // for file I/O
#include <cstdlib> // for exit() ����

int main()
{
	const int SIZE = 60;
	using namespace std;
	struct patron
	{
		string name;
		double money = 0.0;
	};
	// �Ȼ�ȡҪ��ȡ���ļ�
	char filename[SIZE];
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	// ���� ifstream ����
	ifstream inFile;
	inFile.open(filename);
	// ����ļ��Ƿ�򿪳ɹ�
	if (!inFile.is_open())
	{
		cout << "Cannot open the file " << filename << endl;
		exit(EXIT_FAILURE);
	}
	// ���Կ�ʼ��ȡ�ļ���
	int num;
	inFile >> num;
	// inFile.get(); // д��д��һ���ˣ�Ϊʲô�أ�
	patron* arr = new patron[num];
	for (int i = 0; i < num; i++)
	{
		inFile >> arr[i].name;
		// inFile.get();
		inFile >> arr[i].money;
		// inFile.get();
	}
	// ����
	vector<patron> grandpatrons;
	vector<patron> patrons;
	for (int i = 0; i < num; i++)
	{
		if (arr[i].money > 10000)
		{
			grandpatrons.insert(grandpatrons.begin(), arr[i]);
		}
		else
		{
			patrons.insert(patrons.begin(), arr[i]);
		}
	}
	if (!grandpatrons.empty())
	{
		cout << "Grand Patrons:\n";
		for (int i = 0; i < grandpatrons.size(); i++)
		{
			cout << "name: " << (grandpatrons[i].name.empty() ? "none" : grandpatrons[i].name)
				<< ", money: " << grandpatrons[i].money << endl;
		}
	}
	if (!patrons.empty())
	{
		cout << "Patrons:\n";
		for (int i = 0; i < patrons.size(); i++)
		{
			cout << "name: " << (patrons[i].name.empty() ? "none" : patrons[i].name)
				<< ", money: " << patrons[i].money << endl;
		}
	}

	// �ر�����Դ����Ҫ�����ˡ�
	inFile.close();
	delete[] arr;
	return 0;
}
/*
Enter name of data file: patrons.txt
Grand Patrons:
name: zhao, money: 300000
name: zhang, money: 15000
Patrons:
name: liu, money: 10000
name: wang, money: 3000
*/