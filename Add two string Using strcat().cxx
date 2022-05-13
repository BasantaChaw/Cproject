//The program is coded By Basanta Chaudhary
/*
wap to add two string using strcat() function
*/
#include <iostream>
#include <math.h>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
{
	char c[20], d[30];
	cout << "Enter First String:";
	cin >> c;
	cout << "Enter Second String:";
	cin >> d;
	strcat(c, d);
	cout << "The Full Name:" << c;

	return 0;
}