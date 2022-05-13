//The program is coded By Basanta Chaudhary
/*

*/
#include <iostream>
using namespace std;
#define PI 3.14
int main()
{
	int r;
	float area;
	cout << "Enter a Radius of Circle:";
	cin >> r;
	area = PI * r * r;
	cout << "Area of Circle " << area;
	return 0;
}