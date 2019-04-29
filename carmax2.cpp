#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
void carmax2(double[], double[]);
int main()
{
	double offer[5];
	double stats[3];
	double min = 10000000, max = 0, avg;
	stats[0] = min;
	stats[1] = max;
	for (int i = 0; i < 5; i++)
	{
		cout << "enter offer" << i + 1 << endl;
		cin >> offer[i];
	}
	carmax2(offer, stats);
}
void carmax2(double offer[], double stat[])
{
	double total = 0;
	for (int i = 0; i < 5; i++)
	{
		if (offer[i] < stat[0])
		{
			stat[0] = offer[i];
		}
		if (offer[i] > stat[1])
		{
			stat[1] = offer[i];
		}
		total += offer[i];
	}
	stat[2] = total / 5;
	cout << " min offer " << stat[0] << " max offer " << stat[1] << " avg " << stat[2] << endl;
}

