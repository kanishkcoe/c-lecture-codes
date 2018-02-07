#include <iostream>

using namespace std;

int primeCount(int*, int);
int isPrime(int);

int main()
{
  int a[7];
  for(int i = 0; i < 7; i++)
  {
    cin >> a[i];
  }

  cout << "Total number of prime is : " << primeCount(a, 7) << endl;
  return 0;
}

int primeCount(int a[], int n)
{
  int count = 0;

  for(int i = 0; i < n; i++)
  {
    if(isPrime(a[i]) == 1)
    {
      cout << a[i] << ", ";
      count++;
    }
  }
  return count;
}


int isPrime(int num)
{
  if(num == 1)
  {
    return 0;
  }
  for(int i = 2; i <= num / 2; i++)
  {
    if(num % i == 0)
    {
      return 0; //false condition
    }
  }
  return 1; //true condition
}
