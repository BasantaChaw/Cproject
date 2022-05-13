//The program is coded By Basanta Chaudhary
/*
wap to Illustrare entere numbera in ascending order
*/
#include <iostream>
#include <math.h>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
{
	int num[30], i, j, n, temp;
	cout << "How many Numbers are there??" << endl;
	cin >> n;
	cout << "\nThere are " << n << "Numbers !" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	cout << "You Have entered " << n << "Number!" << endl;
	for (i = 0; i < n; i++)
	{
		for (i = 0; i < n - 1; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (num[i] > num[j])
				{
					temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				}
			}
		}
	}
	cout << "\nYou have inAcessding order" << endl;
	for (i = 0; i < n; i++)
	{
		cout << num[i] << endl;
	}
	return 0;
}