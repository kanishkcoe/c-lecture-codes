#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  //randomize();

  int n = (rand() % 5)  + 10;

  for(int i = 0; i < n; i++)
  {
    cout << i << endl;
  }

  return 0;
}
