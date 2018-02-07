#include <iostream>

using namespace std;

int palindromeCount(int[], int);
int isPalindrome(int);

int main()
{
  int a[10];

  for(int i = 0; i < 10; i++)
  {
    cin >> a[i];
  }

  cout << "Number of palindromes are : " << palindromeCount(a, 10) << endl;
  return 0;
}

int palindromeCount(int a[], int size)
{
  int count = 0;
  for(int i = 0; i < size; i++)
  {
    if(isPalindrome(a[i]))
    {
      count++;
    }
  }

  return count;
}

int isPalindrome(int num)
{
  int r, temp, check = 0;
  temp = num;

  while(temp != 0)
  {
    r = temp % 10;
    check = check * 10 + r;
    temp /= 10;
  }

  if(check == num)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
