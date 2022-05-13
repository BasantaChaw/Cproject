//The program is coded By Basanta Chaudhary
/*
wap to convert days into years,weeks and days
*/
#include <iostream>
using namespace std;
int main()
{
	int years, weeks, days;
	cout << "Enter Number of Days:";
	cin >> days;
	years = days / 365;
	weeks = (days % 365) / 7;
	days = days - ((years * 365) + (weeks * 7));
	cout << "Years=" << years << "\nWeeks=" << weeks << "\nDays=" << days;
	return 0;
}