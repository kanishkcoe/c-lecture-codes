#include <iostream>

using namespace std;

int main()
{
  int a[10][10], b[10][10], sum[10][10], diff[10][10];
  int row, col;

  cout <<"Enter number of rows and columns : ";
  cin >> row >> col;

  cout << "Enter elements of a : " << endl;
  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      cin >> a[i][j];
    }
  }

  cout << "Enter elements of b : " << endl;
  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      cin >> b[i][j];
    }
  }

  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      sum[i][j] = a[i][j] + b[i][j];
      diff[i][j] = a[i][j] - b[i][j];
    }
  }

  cout << "Sum = " << endl;
  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      cout << sum[i][j] << "\t";
    }
    cout << endl;
  }

  cout << "Difference = " << endl;
  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      cout << diff[i][j] << "\t";
    }
    cout << endl;
  }
  return 0;
}
