//The program is coded By Basanta Chaudhary
// I Adore Coding
/*
wap to display 1-D Array and display it
*/
#include <iostream>
#include <math.h>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
{
	int num[10], i;
	cout << "Enter In Array :";
	for (i = 0; i < 5; i++)
	{
		cin >> num[i];
	}
	cout << "You have Entered Number In Array !" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "[" << i << "]"
			 << "=" << num[i] << endl;
	}

	return 0;
}