//The program is coded By Basanta Chaudhary
/*
wap to count number of ditgits
*/
#include <iostream>
#include <math.h>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
{
	int num;
	int count = 0;
	cout << "Enter Nunbers:" << endl;
	cin >> num;
	while (num)
	{
		num /= 10;
		count++;
	}
	cout << "The Number of Digits Is " << count;

	return 0;
}