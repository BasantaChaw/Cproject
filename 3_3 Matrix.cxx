//The program is coded By Basanta Chaudhary
// I Adore Coding 
/*
wap to Display 3*3 Matrix 
*/
#include <iostream>
#include <math.h>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
{
	int num[3][3],i,j;
	cout<<"3*3 Matrix !"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<"Matrix["<<i<<"]["<<j<<"]:";
			cin>>num[i][j];
			
		}
	}
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
		cout<<num[i][j]<<"  ";	
		
		}
		cout<<endl<<endl;
		}
	
	return 0;
}