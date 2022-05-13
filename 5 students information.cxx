//The program is coded By Basanta Chaudhary
/*
wap to print STUDENT informartion enter by user and using srltructure
*/
#include <iostream>
#include <math.h>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
{
	struct student
	{
		int roll;
		char name[20];
		float marks;
		char remarks;
		char gen;
	};
	student s;

	cout << "Enter Name:";
	cin >> s.name;
	cout << "Enter Roll_No:";
	cin >> s.roll;
	cout << "Enter marks:";
	cin >> s.marks;
	cout << "Enter Gender M/F:";
	cin >> s.gen;
	cout << "Enter Passed/Faileed(p/f):";
	cin >> s.remarks;
    cout<<"\t-----------------------------------------"<<endl;
    cout << "\t|      Student Informations !        |" << endl;
	cout<<"\t-----------------------------------------"<<endl<<endl<<endl;
	cout << "\t"
		 << "Name   "
		 << "Roll_No  "
		 << "Marks  "
		 << " Remarks  "
		 << "Gender " << endl;
	cout << "\t---------------------------------------" << endl;

	cout << "\t" << s.name;
	cout << "\t " << s.roll;
	cout << "\t " << s.marks;
	cout << "\t  " << s.remarks;
	cout << "\t  " << s.gen;
	cout << endl;

return 0;
}
