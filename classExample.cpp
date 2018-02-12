#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  getline(cin, s);

  cout << "length : " << s.length() << endl;
  if(s.find('ani'))
  {
    cout << "yes";
  }
  else
  {
    cout << "no";
  }
  return 0;
}
