#include <iostream>

using namespace std;

void strcon(char s[])
{
    for(int i = 0, l = 0; s[i] != '\0'; i++, l++)
    {
      cout << "---------------" << endl;
      cout << "i = " << i << " and l = " << l << endl;
      for(int j = 0; j < l; j++)
      {
        cout << "before : " << s[j] << " ----- ";
        if(isupper(s[j]))
        {
          s[j] = tolower(s[j]) + 2;
        }
        else if(islower(s[j]))
        {
          s[j] = toupper(s[j]) - 2;
        }
        else
        {
          s[j] = '@';
        }
        cout << "after : " << s[j] << endl;
      }
      cout << "---------------" << endl;
    }
}

int main()
{
  char c[] = "Romeo Juliet";
  strcon(c);  // c = Romeo Juliet
  cout << "Text : " << c << endl;
  cout << "New Text : " << c + 3 << endl;
  cout << "Last Text : " << c + 5 - 2 << endl;
  return 0;
}
