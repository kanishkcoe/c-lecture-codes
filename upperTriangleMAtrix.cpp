#include <iostream>

using namespace std;

#define SIZE 3

int main()
{
  int matrix[SIZE][SIZE];
  int sum = 0;

  for(int i = 0; i < SIZE; i++)
  {
    for(int j = 0; j < SIZE; j++)
    {
      cin >> matrix[i][j];
    }
  }

  int camelCasing, snake_case;

  for(int i = 0; i < SIZE; i++)
  {
    for(int j = 0; j < SIZE; j++)
    {
      if(i != j)
        sum += matrix[i][j];
    }
  }
  cout << sum << endl;
  return 0;
}
