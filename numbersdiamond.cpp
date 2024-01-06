#include <iostream>
using namespace std;

int main()
{
	int rows;
	cout << "Enter number of rows: ";
	cin >> rows;
	bool flag = false;

	while (rows < 5 || rows % 2 == 0)
	{
		cout << "Invalid input" << endl << endl;
		cout << "Enter the number of rows again : ";
		cin >> rows;
		flag = false;
	}
	cout << endl;

	if (rows >= 5 && rows % 2 != 0)
	{
		flag = true;
	}

	int k = 1, l = 2;

	while (flag = true)
	{
		for (int i = 1; i <= (rows / 2) + 1; i++)                         //prints the upper part
		{
			for (int j = 0; j < ((rows / 2) + 1) - i; j++)
			{
				cout << "  ";
			}

			for (int j = 1; j <= (2 * i - 1); j++)
			{
				cout << k << " ";

				if (l != 2)
				{
					k = 9;
				}
				if (k < 9)
				{
					k = k + 2;
				}
				else
				{
					k = k - l;
					l = l + 2;
				}
				if (k == 1)
				{
					l = 2;
				}
			}
			cout << endl;
		}

		for (int i = rows / 2; i >= 1; i--)
		{
			for (int j = 0; j <= (rows / 2) - i; j++)
			{
				cout << "  ";
			}

			for (int j = 1; j <= (2 * i - 1); j++)
			{
				cout << k << " ";

				if (l != 2)
				{
					k = 9;
				}
				if (k < 9)
				{
					k = k + 2;
				}
				else
				{
					k = k - l;
					l = l + 2;
				}
				if (k == 1)
				{
					l = 2;
				}
			}
			cout << endl;
		}
		break;
	}
	cout << endl;

	system("pause");
	return 0;
}