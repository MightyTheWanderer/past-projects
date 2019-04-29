#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
void carmax(double offer1, double offer2, double offer3, double offer4, double &min, double &max, double &avg);
int main()
{
	double min, max, avg;
	double offer1, offer2, offer3, offer4;
	cout << "enter offer 1 " << endl;
	cin >> offer1;
	cout << "enter offer 2 " << endl;
	cin >> offer2;
	cout << "enter offer 3 " << endl;
	cin >> offer3;
	cout << "enter offer 4" << endl;
	cin >> offer4;
	carmax(offer1, offer2, offer3, offer4, min, max, avg);

	cout << "max offer: " << max << endl << "min offer: " << min << endl << "avg offer: " << avg << endl;
	return 0;

}
void carmax(double offer1, double offer2, double offer3, double offer4, double &min, double &max, double &avg)
{
	avg = (offer1 + offer2 + offer3 + offer4) / 4;
	if (offer1 < offer2 && offer1 < offer3&&offer1 < offer4)
	{
		min = offer1;
	}
	else if (offer2 < offer1&&offer2 < offer3&&offer2 < offer4)
	{
		min = offer2;
	}
	else if (offer3 < offer1&&offer3 < offer2&&offer3 < offer4)
	{
		min = offer3;
	}
	else if (offer4 < offer1&&offer4 < offer3&&offer4 < offer3)
	{
		min = offer4;
	}
	if (offer1 > offer2&&offer1 > offer3&&offer1 > offer4)
	{
		max = offer1;
	}
	else if (offer2 < offer1&&offer2 < offer3&&offer2 < offer4)
	{
		max = offer2;
	}
	else if (offer3 > offer1&&offer3 > offer2&&offer3 > offer4)
	{
		max = offer3;
	}
	else if (offer4 > offer1&&offer4 > offer3&&offer4 > offer3)
	{
		max = offer4;
	}
}
