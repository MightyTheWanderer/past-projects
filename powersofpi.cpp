
// Include directives 
#include <iostream>
#include <iomanip>
#include <cmath>
// Using directives 
using namespace std;
//The main function
int main()
{
	//Declare variables
	double pi;
	int power;
	// algorithm in c++
	pi = 3.14159;
	cout << "enter power of pi 0-3" << endl;
	cin >> power;
	if (power == 0)
	{
		cout << pow(pi, 0) << endl;
	}
	else	if (power == 1)
	{
		cout << pow(pi, 1) << endl;
	}
	else if (power == 2)
	{
		cout << pow(pi, 2) << endl;
	}
	else if (power == 3)
	{
		cout << pow(pi, 3) << endl;
	}
	return 0;
}