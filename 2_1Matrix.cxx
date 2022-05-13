//The program is coded By Basanta Chaudhary
// I Adore Coding
/*

*/
#include <iostream>
#include <math.h>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
{
	int num[2][1], i, j;
	cout << "Matrix 2*1 ....!*" << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 1; j++)
		{
			cout << "Matrix[" << i << "][" << j << "]:";
			cin >> num[i][j];
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 1; j++)
		{
			cout << num[i][j];
		}
		cout << endl;
	}

	return 0;
}