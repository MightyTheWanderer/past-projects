
// Include directives 
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int month, year, days = 0;
	// algorithm in c++
	cout << "enter integer of month" << endl;
	cin >> month;
	cout << "enter integer of year" << endl;
	cin >> year;
	if (month == 1)
	{
		days = 31;
	}
	else if (month == 2)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				days = 29;
			}
			else
			{
				days = 28;
			}
		}
		else
		{
			if (year % 4 == 0)
			{
				days = 29;
			}
			else
			{
				days = 28;
			}
		}
	}
	else if (month == 3)
	{
		days = 31;
	}
	else if (month == 4)
	{
		days = 30;
	}
	else	if (month == 5)
	{
		days = 31;
	}
	else if (month == 6)
	{
		days = 30;
	}
	else if (month == 7)
	{
		days = 31;
	}
	else if (month == 8)
	{
		days = 31;
	}
	else if (month == 9)
	{
		days = 30;
	}
	else if (month == 10)
	{
		days = 31;
	}
	else if (month == 11)
	{
		days = 30;
	}
	else if (month == 31)
	{
		days = 31;
	}
	cout << days << endl;
	return 0;
}