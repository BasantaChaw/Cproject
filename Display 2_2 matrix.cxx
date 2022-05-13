//The program is coded By Basanta Chaudhary
// I Adore Coding
/*
wap to display 2*2 Matrix
*/
#include <iostream>
#include <math.h>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
{
	int num[2][2], i, j;
	cout << "Matrix 2*2 ...!" << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "Matrix [" << i << "][" << j << "]:";
			cin >> num[i][j];
		}
	}
	cout << endl
		 << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << num[i][j] << "  ";
		}
		cout << endl;
	}

	return 0;
}