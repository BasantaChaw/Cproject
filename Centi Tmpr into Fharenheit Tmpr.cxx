//The program is coded By Basanta Chaudhary
/*
wap to convert centigrade into fharenheit in temperature
*/
#include <iostream>
using namespace std;
int main()
{
	float centi,fha;
	
	cout << "Enter Centigrade Temperature:";
	cin>>centi;
	fha=9.0/5*centi+32;
	cout<<"THe temperature In Fharenheit:"<<fha;
	return 0;
}