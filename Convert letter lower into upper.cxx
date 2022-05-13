//The Program is  Coded By Basanta Chaudhary
//wap to convert LowerCase Letter Into UpperCase Letter and Vice-versa
#include <iostream>
using namespace std;
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
	char show_data();
};
int main()
{
	Convert p;
	p.get_data();
	char b = p.show_data();
	if (b > 65)
	{
		cout << "Your LowerCase " << b;
	}
	else
	{
		cout << "UpperCase :" << b;
	}
	return 0;
}
char Convert::show_data()
{
	if (a >= 65 && a <= 90)
	{
		a += 32;
		return a;
	}
	else if (a >= 97 && a <= 122)
	{
		a -= 32;
		return a;
	}
}