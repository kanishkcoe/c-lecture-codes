#include <iostream>

using namespace std;

int change(int num)
{
  if(num % 2 == 0)
  {
    return num * 2;
  }
  else
  {
    return num * 3;
  }
}

int main()
{
  int a[30];
  int n;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
    a[i] = change(a[i]);
  }

  for(int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }

  return 0;
}
