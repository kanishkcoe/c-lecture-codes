#include <iostream>

using namespace std;

int main()
{
  int n;

  cin >> n;

  for(int i = 1; i <= n; i++)
  {
    if(n % i == 00)
    {
      cout << i;
      if(i < n)
      {
        cout <<", ";
      }
    }
  }

  return 0;
}
