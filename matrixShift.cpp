#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int main()
{
  int m[5][5];
  int row, column;

  cout << "Enter row and column (<5 only): "; cin >> row >> column;
  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < column; j++)
    {
      cin >> m[i][j];
    }
  }

  for(int j = 0; j < column; j++)
  {
    swap(m[0][j], m[row - 1][j]);
  }

  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < column; j++)
    {
      cout << m[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}
