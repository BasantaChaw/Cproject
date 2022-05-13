//The program is coded By Basanta Chaudhary
/*

*/
#include <iostream>
#include <math.h>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
{
	float m, cm, km;
	cout << "Enter lenght in centimeter:";
	cin >> cm;
	m = cm / 100.0;

	km = cm / 100000.0;
	cout << "The meter=" << m << "\tKilometer=" << km;
	return 0;
}