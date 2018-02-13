#include <iostream>

using namespace std;

int main()
{
  int a[5][5];
  int sum1 = 0;
  int sum2 = 0;
  int sum3 = 0;
  int sum4 = 0;

  //input of matrix
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      cin >> a[i][j];
    }
  }

  //logic
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      if(i <= j)
      {
        sum1 += a[i][j];
      }
      if(i >= j)
      {
        sum2 += a[i][j];
      }
      if(i + j < 3)
      {
        sum3 += a[i][j];
      }
      if(i + j >= 2)
      {
        sum4 += a[i][j];
      }
    }
  }

  cout << "sum 1 = " << sum1 << endl;
  cout << "sum 2 = " << sum2 << endl;
  cout << "sum 3 = " << sum3 << endl;
  cout << "sum 4 = " << sum4 << endl;
  return 0;
}
