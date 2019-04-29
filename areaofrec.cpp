#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
double getlength();
double getwidth();
double getarea(double, double);
void displaydata(double, double, double);
int main()
{
	double length, width, area;
	length = getlength();
	width = getwidth();
	area = getarea(length, width);
	displaydata(length, width, area);
	return 0;
}
double getlength()
{
	double length;
	cout << "enter length" << endl;
	cin >> length;
	return length;
}
double getwidth() {
	double width;
		cout << "enter width" << endl;
		cin >> width;
		return width;
}
double getarea(double length, double width)
{
	double area;
	area = length * width;
	return area;
}
void displaydata(double length, double width, double area)
{
	cout << "length " << length << "width " << width << "area " << area << endl;
}