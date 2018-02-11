#include <iostream>
using namespace std;

int main()
{
  char s[10];
  char x;
  int count;
  cin.getline(s, 10);

  for(int i = 0; s[i] != NULL; i++)
  {
    count = 0;
    if(s[i] != '*')
    {
      x = s[i];
      for(int j = 0; s[j] != NULL; j++)
      {      
        if(x == s[j])
        {
          count++;
          s[j] = '*';
        }
      }
    }
    if(count != 0)
      cout << x << " : " << count << endl;
  }

  return 0;
}
