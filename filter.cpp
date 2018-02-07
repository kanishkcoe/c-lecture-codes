#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
  char input[20];
  char temp;
  gets(input);
  int i;
  int j;
  for(i = 0,j = 0; input[j] != NULL; j++)
  {
    if(isalpha(input[i]))
    {
      i++;
    }
    else
    {
      temp = input[i];
      input[i] = input[j];
      input[j] = temp;
    }
    cout << input[i];
    cout << endl;
  }
  input[i + 1] = NULL;
  cout << input;

}
