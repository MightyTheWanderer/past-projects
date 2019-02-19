#include <iostream>
#include <iomanip>
#include <cmath>
// Using Directives
using namespace std;
// The main function
int main()
{
	// declare variables
	double fatgrams, caloriesfromfat, calories, percentageofcalfromfat;
	// algorithm in c++
	cout << "enter number of calories" << endl;
	cin >> calories;
	if (calories <= 0)
	{
		cout << "invalid how you eating 0 calories my guy?" << endl;
		return 0;
	}
	cout << "enter number of fatgrams" << endl;
	cin >> fatgrams;
	if (fatgrams <= 0)
	{
		cout << "invalid you need fat my guy" << endl;
		return 0;
	}
	caloriesfromfat = fatgrams * 9;
	percentageofcalfromfat = caloriesfromfat / calories;
	cout << "caloriesfromfat"<< caloriesfromfat << endl;
	if (caloriesfromfat < calories)
	{
		cout << "invalid fatgram or calorie input" << endl;
		return 0;
	}
	else cout << "percentage of calories from fat are" << percentageofcalfromfat << endl;
	if (percentageofcalfromfat < 30)
	{
		cout << "food is low in fat" << endl;
	}
	return 0;
}


		
    