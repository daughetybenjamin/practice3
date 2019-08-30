#include <iostream>
using namespace std;

int main()
{
	int year = 1;
	do 
	{
		cout << "Enter a year value. To exit, enter 0: ";
		cin >> year;
		if (year % 4 == 0)
		{
			if (year % 100 == 0)
			{
				if (year % 400 == 0)
				{
					cout << "This is a leap year." << endl;
				}
				else
				{
					cout << "This is not a leap year." << endl;
				}
			}
			else
			{
				cout << "This is a leap year." << endl;
			}
		}
	} while (year != 0);
	return 0;
}