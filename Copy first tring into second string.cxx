//The program is coded By Basanta Chaudhary
/*
wap to copy one string to another strcpy() function
*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[20], b[30];

	cout << "Enter first string:";
	cin >> a;
	cout << "The string of b is :" << strcpy(b, a);
	return 0;
}