#include <iostream>

using namespace std;

int main()
{
  char string[30];
  cout <<"Enter string : "; cin.getline(string, 30);

  cout << "string : " << string << endl;
  
  for (int i = 0; string[i] != NULL; i++)
  {
    if(string[i] == ' ')
    {
      string[i] = '-';
    }
  }

  cout << "Converted string : " << string << endl;
}
