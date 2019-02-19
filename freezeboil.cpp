#include <iostream>
#include <iomanip>
#include <cmath>
// Using Directives
using namespace std;
// The main function
int main()
{
	// declare variables
	double temperature;
	// algorithm in c++
	cout << "enter temperature" << endl;
	cin >> temperature;
	cout << "things that would freeze" << endl;
	if (temperature <= -173)
	{
		cout << "ethylalcohol" << endl;
	}
	if (temperature <= -38)
	{
		cout << "mercury" << endl;
	}
	if (temperature <= -362)
	{
		cout << "oxygen" << endl;
	}
	if (temperature <= 32)
	{
		cout << "water" << endl;
	}
	cout << "things that boil are" << endl;
	if (temperature >= 172)
	{
		cout << "ethylalcohol" << endl;
	}
	if (temperature >= 676)
	{
		cout << "mercury" << endl;
	}
	if (temperature >= -306)
	{
		cout << "oxygen" << endl;
	}
	if (temperature >= 212)
	{
		cout << "water" << endl;
	}
	return 0;
}

