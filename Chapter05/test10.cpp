#include <iostream>

int main()
{
	using namespace std;
	cout << "Enter the number of rows: ";
	int rows;
	cin >> rows;
	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < rows; column++)
		{
			if (row + column < rows - 1)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}
	return 0;
}
/*
Enter the number of rows: 5
	*
   **
  ***
 ****
*****
*/