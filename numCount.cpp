#include <iostream>

using namespace std;

int main()
{
  int s[10];
  int x;
  int count;

  for(int i = 0; i < 10; i++)
  {
    cin >> s[i];
  }

  for(int i = 0; i < 10; i++)
  {
    count = 0;
    if(s[i] != -404)
    {
      x = s[i];
      for(int j = 0; j < 10; j++)
      {
        if(x == s[j])
        {
          count++;
          s[j] = -404;
        }
      }
    }
    if(count != 0)
      cout << x << " : " << count << endl;
  }

  return 0;
}
