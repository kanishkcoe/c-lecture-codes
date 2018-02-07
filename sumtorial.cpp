#include <iostream>

using namespace std;

float powerseries(int, int);
int sumtorial(int);
int power(int, int);

int main()
{
  int x, n;
  cout << "Enter x : "; cin >> x;
  cout << "Enter n : "; cin >> n;
  cout << powerseries(n, x);
  return 0;
}

float powerseries(int n, int x)
{
  float sum = 0;

  for(int i = 1; i <= n; i++)
  {
    cout << "( ";
    cout << x << "^" << i << "/ " << sumtorial(i);
    cout << ") ";
    if(i < n)
    {
      cout << " + ";
    }
    sum += (float)power(x, i) / sumtorial(i);
  }

  cout << " = ";
  return sum;
}

int power(int base, int exponent)
{
  int pro = 1;
  for(int i = 1; i <= exponent; i++)
  {
    pro *= base;
  }

  return pro;
}

int sumtorial(int n)
{
  int sum = 0;
  for(int i = 1; i <= n; i++)
  {
    sum += i;
  }
  return sum;
}
