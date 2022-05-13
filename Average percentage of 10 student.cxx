//The program is coded By Basanta Chaudhary
// I Adore Coding 
/*
wap that reads marks percentage in an examination of 10 Students and calculated and display average percentage and deviation from average each students
*/
#include <iostream>
#include <math.h>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
{
	float marks[10],avg,dev,sum=0;
	int i;
	cout<<"Enter Percentage of 10 Students :"<<endl;
	for(i=0;i<10;i++){
		cin>>marks[i];
		sum+=marks[i];		
		
	}
	avg=sum/10;
	cout<<"The Average Marks Is :"<<avg<<endl;
	cout<<"The deviation of Each Students From Average :";
	for(i=0;i<10;i++){
		
	dev=marks[i]-avg;
	cout<<endl<<"Marks="<<marks[i]<<"\t0Deviation="<<dev;	
	}
	
	
	
	return 0;
}