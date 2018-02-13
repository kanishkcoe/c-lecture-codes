#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  char s[20];
  int flag = 1;
  cin.getline(s, 20);


  for(int i = 0, l = strlen(s) - 1; i < l; i++, l--)
  {
    if(s[i] != s[l])
    {
      flag = 0;
    }
  }

  if(flag == 0)
  {
    cout << "Not palindrome" << endl;
  }
  else
  {
    cout << "palindrome" << endl;
  }

  return 0;
}
