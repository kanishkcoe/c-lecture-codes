#include <iostream>

using namespace std;

long factorial(int);
int power(int, int);

int main()
{
  int x, n;
  float sum = 0;

  cin >> x >> n;

  for(int i = 1; i <= n; i++)
  {
    sum += (float)power((-1), i + 1) * power(x, i) / factorial(i);
  }

  cout << sum;
  return 0;
}

long factorial(int n)
{
  if(n == 1)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
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
