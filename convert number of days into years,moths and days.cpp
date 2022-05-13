//wap to convert number of days into weeks ,years and days
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int days,weeks,years;
	cout<<"Enter Number Of Dyas :";
	cin>>days;
	years=days/365;
	weeks=(days%365)/7;
	days=days-((years*365)+(weeks*7));
	cout<<"Weeks="<<weeks<<"\tYears="<<years<<"\tDays="<<days;
	return 0;
	
}
