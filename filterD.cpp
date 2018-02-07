#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
  char input[20];
  char output[20];
  gets(input);
  int i;
  int k = 0;
  for(i = 0; input[i] != NULL; i++)
  {
    if(isalpha(input[i])) //if(input[i] >= 'a' && input[i] <= 'z' || input[i] >= 'A' && input[i] <= 'Z')
    {
      output[k] = input[i];
      cout << "output string position" << k << " : " << output[k];
      k++;
    }
    cout << endl;
  }
  output[k] = NULL;
  cout << output;
}
