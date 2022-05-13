//The Program is  Coded By Basanta Chaudhary
//sort of Numbers
#include <iostream>
#include <math.h>
#define PI 3.14
#include <cstring>
using namespace std;
class Cylinder
{
  private:
	int h, r;

  public:
	void get_data()
	{
		cout << "Enter Radius :";
		cin >> r;
		cout << "Enter Height:";
		cin >> h;
	}

	void show_data()
	{
		float m;
		m = PI * r * r * h;
		cout << "The Volume Of Cylindrical Body Is  " << m<<"cm^3";
	}
};
class Box
{
  private:
	int l, b;

  public:
	void get_data();
	void show_data();
};
class Convert
{
  private:
	char a;

  public:
	void get_data()
	{
		cout << "Enter Some Text:";
		cin >> a;
	}
	void show_data();
};
class Sort
{
  private:
	int num[30], i, j, k, n;

  public:
	void get_Data()
	{
		cout << "How Many Numbers are There???\n";
		cin >> n;
		cout << "There are " << n << " Numbers !!\n";
	}
	void calculAte();
};

int main()
{
	int k;
	Cylinder t;
	Convert p;
	Sort s;
	int numb;
	cout << "\n\n--------_------_-----WelCome To  Nepal !!---------_---------\n\n"
		 << endl;
	cout << "\tPress 1 for Asscending Order !" << endl;
	cout << "\tPress 2 For convert LowerCase into Uppercase !!" << endl;
	cout << "\tPress 3  For find Area of Triangle !!\n";
	cout << "\tPress 4 for find Volume Of Cylinder !!\n";
	cout<<"\tPress 5 for Matrix 2*3  Sum !!\n";
	cout<<"\tpress 6 for find largest num btwn 3 Num !!\n";
	cout << "\tPress 'Q' For Quite Program !" << endl;

	cin >> numb;
	switch (numb)
	{
	case 1:
	{
		s.get_Data();
		s.calculAte();
		break;
	}
	case 2:
	{
		cout << "Hello !" << endl;
		p.get_data();
		p.show_data();
		break;
	}
	case 3:
	{
		Box b;
		b.get_data();
		b.show_data();
		break;
	}
	case 4:
	{
		t.get_data();
		t.show_data();
		break;
	}
	case 5:{
		int num1[2][3], num2[2][3], i, j, sum[2][3];
	cout << "Enter First Matrix 2*3 Row By Row !" << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << "Matrix[" << i << "][" << j << "]:";

			cin >> num1[i][j];
		}
	}
	cout << endl
		 << "Enter Second Matrix 2*3 Row By Row!" << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << "Matrix[" << i << "][" << j << "]:";
			cin >> num2[i][j];
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum[i][j] = num1[i][j] + num2[i][j];
		}
	}
	cout << endl
		 << "Matrix 2*3 S um Is " << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << sum[i][j] << "   ";
		}
		cout << endl;
	}	break;
		
	}
case 6:{
	int a, b, c;
	cout << "Enter any three numbers :";
	cin >> a >> b >> c;
	switch (a > b && a > c)
	{
	case 1:
		cout << "A is Largest !";
		break;
	case 0:
		switch (b > c)
		{
		case 1:
			cout << "B is Largest !";
			break;
		case 0:
			cout << "C is Largest !";
			break;
		}
	}
break;	
	
}
	default:

		cout << "\t\t----------Thank You----------";
	}
	return 0;
}
void Sort::calculAte()
{
	for (i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	cout << "You Have Entered Number !!\n";
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (num[i] > num[j])
			{
				k = num[i];
				num[i] = num[j];
				num[j] = k;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << num[i] << "   \n";
	}
}

void Convert::show_data()
{
	if (a >= 65 && a <= 90)
	{
		a += 32;
		cout << "LowerCase :" << a;
	}
	else if (a >= 97 && a <= 122)
	{
		a -= 32;
		cout << "UpperCase :" << a;
	}
}
void Box::get_data()
{
	cout << "Enter Base :";
	cin >> b;
	cout << "Enter Height:";
	cin >> l;
}
void Box::show_data()
{
	cout << "The Area  Of Triangle:" << 0.5 * b * l;
}