#include <iostream>

using namespace std;

int main()
{
  int a[5][5];
  int mainSum = 0;
  int secSum = 0;

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
      if(i == j)
      {
        mainSum += a[i][j];
      }
      if(i + j == 3 - 1)
      {
        secSum += a[i][j];
      }
    }
  }

  cout << "main diagonal sum = " << mainSum << endl;
  cout << "secondary diagonal sum = " << secSum << endl;
  return 0;
}
