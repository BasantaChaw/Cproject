//wap to print display of Employee information
#include<iostream>
#include<cstring>
using namespace std;
class Employee{
	public:
		string Name;
		int age;
		
		public:
			void get_data(){
				cout<<"Employee Name Is  "<<Name<<endl;
				cout<<"Employeee Age Is   "<<age;
			}
};
int main(){
	Employee PerObj;
	PerObj.Name="Basanta Chaudhary ";
	PerObj.age=20;
	PerObj.get_data();
	
	
	return 0;
}
