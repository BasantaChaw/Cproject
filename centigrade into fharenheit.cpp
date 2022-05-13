//wap to read a centigrade Temperature and convert into Fharenheit temperature
#include<iostream>
#include<conio.h>
int main(){
	float centi,fha;
	cout<<"Enter Centigrade Temperature:";
	cin>>centi;
	fha=9.0/7*centi+32;
	cout<<"The Temperature In Fharenheit Is "<<fha;
	return 0;
}
