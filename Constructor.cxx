//The Program is  Coded By Basanta Chaudhary
//wap to display Detailes Of Students using Constructor
#include<iostream>
using namespace std;
class myClass{
	private:
int num,i;
public:
myClass(int k){
	
	num=k;
	for(i=0;i<num;i++){
		
		cout<<"  "<<i<<endl;
	}
}

};
int main(){
myClass a(5);
//a.display_data();	
	
return 0;	
}//void display_data(){
//cout<<i<<endl;	
	
