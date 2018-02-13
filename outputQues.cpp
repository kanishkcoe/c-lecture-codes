#include <iostream>

using namespace std;

int a = 40;

void demo(int &x, int y, int z)
{
  a += x;
  y *= a;
  z = a + y;

  cout << x <<'\t'<< y <<'\t' << z << endl;
}

int main()
{
  int a = 25, b = 15;

  demo(::a, a, b);

  cout << ::a <<'\t'<< a <<'\t' << b << endl;

  return 0;
}
