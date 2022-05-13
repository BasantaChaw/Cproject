//wap to Convert NUmbers of days into years onths and days
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int days,months,years;
	cout<<"Enter Number of days:";
	cin>>days;
	years=days/360;
	months=(days%360)/30;
	years=days-((years*360)+(months*30));
	return 0;
	
}
