#include <iostream>

using namespace std;

int area(int a)
{
  cout << "function 1 called" << endl;
  return a * a;
}

double area(double r)
{
  cout << "function 2 called" << endl;
  return 3.14 * r * r;
}

int main()
{

  cout << area(5) << endl;
  cout << area(5.6) << endl;

  return 0;
}
