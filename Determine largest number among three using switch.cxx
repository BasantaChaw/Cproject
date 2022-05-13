//The program is coded By Basanta Chaudhary
/*
wp to find largest number among them 3 Numbers using Switch statemwnts
*/
#include <iostream>
#include <math.h>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
{
	int x, y, z;
	cout << "Enter any Three Nunbers:";
	cin >> x >> y >> z;
	switch (x > y)
	{
	case 1:
	{
		cout << "X is largest";
		break;
	}
	case 0:
	{
		switch (x > z)
		{
		case 1:
		{
			cout << "X is largest ";

			break;
		}
		case 0:
		{
			switch (y > z)
			{
			case 1:
			{
				cout << "y is largest";
				break;
			}
			case 0:
			{
				cout << "z is largest ";
			}
			}
		}
		}
	}
	}

	return 0;
}