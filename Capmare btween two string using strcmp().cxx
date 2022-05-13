//The program is coded By Basanta Chaudhary
/*
wap to Capmare btween Two string using strcpm() func5ion
*/
#include <iostream>
#include <math.h>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
{
	char a[20], b[30];
	int k;
	cout << "Enter First String:";
	cin >> a;
	cout << "Enter Second String:";
	cin >> b;
	k = strcmp(a, b);
	if (k > 0)
	{
		cout << a << "Is greater Than by" << b << ":" << k;
	}
	else if (k < 0)
	{
		cout << a << "Is less Than By" << b << ":" << k;
	}
	else
	{
		cout << "Both string Is Same";
	}

	return 0;
}