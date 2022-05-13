//wap to find n of Employee Detailes using object and class using array
#include<iostream>
using namespace std;
#define PI 3.14
#include<conio.h>
class Employee{
	private:
		static int Count;
		int ID_no,age;
	  int Salary,contact_no;
		char gender;
		string name,level,Emaile_id,trade;
		
		public:
			void Display_data();
			void Get_data(){
				cout<<"Enter Employee Name:";
				cin>>name;
				cout<<"Enter Employee Age: ";
				cin>>age;
				cout<<"Enter Employee Male/Feamle[m/f]:";
				cin>>gender;
				Count++;
				
			}
		void Get_data_personal();
			
		
};
#include<math.h>
#define size 1000
#include<cstring>
int main(){
	Employee s[size];
	int i,num;
	cout<<"-------------------WelCome To My Program------------------\n"<<endl<<endl;
	cout<<"How many Employers Are there ???\n"<<endl;
	cin>>num;
	cout<<"There are  "<<num<<"  Employers !"<<endl;
	for(i=0;i<num;i++){
		s[i].Get_data();
		s[i].Get_data_personal();
		s[i].Display_data();
	}
	return 0;
}int Employee::Count;
void Employee::Get_data_personal(){
	cout<<"Enter Employee ID_NO:";
	cin>>ID_no;
	cout<<"Enter Employee Level:";
	cin>>level;
	cout<<"Enter Employee Trade:";
	cin>>trade;
	cout<<"Enter Employee Anual_Month Salary:";
	cin>>Salary;
	cout<<"Enter Employee Emaile_ID:";
	cin>>Emaile_id;
	cout<<"Enter Employee Contacte";
	contact_no;
	Count++;
	
}
