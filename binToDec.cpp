#include <iostream>

using namespace std;

int power(int, int);

int main()
{
  int rem;
  int quo;
  int dec = 0;
  int bin;
  int i = 0;
  cin >> bin;
  quo = bin;

  while(quo != 0)
  {
    rem = quo % 10;
    dec += rem * power(2, i);
    i++;
    quo = quo / 10;
  }

  cout << dec << endl;
  return 0;
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
