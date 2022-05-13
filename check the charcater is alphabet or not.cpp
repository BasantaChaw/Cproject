// wap to read a chracter from user and check the character Is Alphabets Or Not
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char a;
	cout<<"Enter A Character :";
	cin>>a;
	if((a>=65&&a<=90)||(a>=97&&a<=122)){
		cout<<"The Character Is Alphabte !";
	}else{
		cout<<"The Character Is Not Alphabet !";
	}
	return 0;
}
