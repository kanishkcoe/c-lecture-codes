#include <iostream>

using namespace std;

int main()
{
  char ch = 'A';
  int num = ch;

  for(int i = 0; i < 26; i++)
  {
    cout << "The ASCII code for " << ch << " is " << num << endl;
    cout << "Adding 1 to the character code" << endl;
    ch = ch + 1;
    num = ch;
  }

  return 0;
}
