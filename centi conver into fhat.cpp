//wap to read centigrade temperature and it convert into fharenheit
#include<iostream>
using namespace std;
int main(){
	float centi,fha;
	cout<<"Enter centigrade temperature:";
	cin>>centi;
	fha=9.0/7*centi+32;
	cout<<"The Fharenheit Temperature Is "<<fha<<" C";
	return 0;
}
