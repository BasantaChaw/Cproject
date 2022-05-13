//The Program is  Coded By Basanta Chaudhary

#include <iostream>
using namespace std;
class Box
{
  private:
	int l, b;

  public:
	void get_data(int x, int y);
	void show_data();
};
int main()
{
	Box b;
	b.get_data(3, 2);
	b.show_data();
	return 0;
}
void Box::get_data(int x, int y)
{
	b = x;
	l = y;
}
void Box::show_data()
{
	cout << "The Area Of Circle:" << 0.5 * b * l;
}