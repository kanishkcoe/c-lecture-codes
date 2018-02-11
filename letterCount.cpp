#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  char x;
  int count;
  getline(cin, s);

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
