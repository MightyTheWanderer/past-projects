/*
program made by saul ashley
bank charges
pseudocode algorithm
IF blance<0
THEN " account overdrawn"
IF balance<400
1. THEN SET total charges = charges + 5
2. PRINT "enter beggining balance"
3. GET balance
4. PRINT "enter number of checks written"
5. GET checks
6. SET charges = 10
7. IF checks<20
8. THEN SET Total charges = charges + (checks*.10)
9. THEN PRINT "Total charges are", total charges
10. IF checks>=20||checks<39
11. THEN SET Total charges = charges + ( checks*.08)
12. THEN PRINT "Total charges are", total charges
13. IF checks>=40||checks<59
14. THEN SET Total charges = charges + ( checks*.06)
15. THEN PRINT "Total charges are", total charges
16. IF checks>=60
17. THEN SET Total charges = charges + ( checks*.04)
18. THEN PRINT "Total charges are", total charges
19. STOP
*/
// Include Directives
#include <iostream>
#include <iomanip>
#include <cmath>
// Using Directives
using namespace std;
// The main function
int main()
{
	// declare variables
	double checks, charges, totalcharges;
	int balance;
	// algorithm in c++
	charges = 10;
	cout << "enter principal balance" << endl;
	cin >> balance;
	if (balance < 0)
	{
		cout << "account overdrawn you broke my guy" << endl;
	}
	else if (balance < 400)
	{
		charges = 25;
	}
	cout << "enter number of checks cashed" << endl;
	cin >> checks;
	if (checks < 20)
	{
		totalcharges = charges + (checks*.10);
		cout << "totalcharges are" << totalcharges << endl;
	}
	else if (checks >= 20 || checks <= 39)
	{
		totalcharges = charges + (checks*.08);
		cout << "totalcharges are" << totalcharges << endl;
	}
	else if (checks >= 40 || checks < 59)
	{
		totalcharges = charges + (checks*.06);
		cout << "totalcharges are" << totalcharges << endl;
	}
	else if (checks >= 60)
	{
		totalcharges = charges + (checks*.04);
		cout << "totalcharges are" << totalcharges << endl;
	}
	return 0;
}
