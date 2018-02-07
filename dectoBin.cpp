#include <iostream>

using namespace std;

int power(int, int);

int main()
{
  int rem;
  int quo;
  int dec;
  int bin = 0;
  int i = 0;
  cin >> dec;
  quo = dec;

  while(quo != 0)
  {
    rem = quo % 2;
    bin = rem * power(10, i) + bin;
    i++;
    quo = quo / 2;
  }
  
  cout << bin << endl;
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
