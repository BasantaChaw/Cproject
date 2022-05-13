//The program is coded By Basanta Chaudhary
/*
wap to read numbers from and counts how many positive,negative and Zero Numbera and display it
*/
#include <iostream>
#include <math.h>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
{
	int num[20], i, n, pcount = 0, ncount = 0, zcount = 0;
	cout << "How many Nunbers are there??" << endl;
	cin >> n;
	cout << "\There are " << n << "NumberS !" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	for (i = 0; i < n; i++)
	{
		if (num[i] > 0)
		{
			pcount++;
		}
		else if (num[i] < 0)
		{
			ncount++;
		}
		else
		{
			zcount++;
		}
	}
	cout << "The Positvies Number:" << pcount << endl;
	cout << "The Negatives Number:" << ncount << endl;
	cout << "Th Zeros Number:" << zcount << endl;

	return 0;
}