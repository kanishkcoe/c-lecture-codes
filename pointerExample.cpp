#include <iostream>

using namespace std;

void swap(int *, int *);

int main()
{
  int a, b;

  a = 45;
  b = 89;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  swap(a, b);

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  return 0;
}

void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
