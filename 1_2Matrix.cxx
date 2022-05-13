//The program is coded By Basanta Chaudhary
// I Adore Coding
/*
Display 1*2 Matrix
*/
#include <iostream>
#include <math.h>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
{
	int num[1][2], i, j;
	for (i = 0; i < 1; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "Matrix[" << i << "][" << j << "];
					cin >>
				num[i][j];
		}
	}
	for (i = 0; i < 1; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << num[i][j] << "  ";
		}
		cout << endl;
	}

	return 0;
}