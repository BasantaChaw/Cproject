//The Program is  Coded By Basanta Chaudhary
//wap to find the value of (a-b)^
#include <iostream>
#include <math.h>
using namespace std;
class Power
{
  private:
	int a, b, k;

  public:
	void get_data()
	{
		cout << "Enter Value Of A:";
		cin >> a;
		cout << "Enter Value Of B:";
		cin >> b;
	}
	void show_data()
	{
		k = pow((a - b), 2);
		cout << "The Value Of (a-b)^2 =" << k;
	}
};
int main()
{
	Power p;
	p.get_data();
	p.show_data();

	return 0;
}