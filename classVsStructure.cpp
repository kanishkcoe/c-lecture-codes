#include <iostream>
#include <string.h>

using namespace std;

//class definition
class Test1
{
  int value;
  char string[20];

public:
  void get()
  {
    cin >> value;
    cin.ignore();
    cin.getline(string, 20);
  }

  void show()
  {
    cout << value << endl;
    cout << string << endl;
  }
};

//structure definition
struct Test2
{
  int value;
  char string[20];
};

//union definition
union Test3
{
  int value;
  char string[20];
};

int main()
{
  //public access
  Test1 a;

  Test2 b;

  Test3 c;

  // a.value = 45;
  // a.string = "kanishk";
  a.get();
  a.show();

  b.value = 45;
  strcpy(b.string, "kanishk");
  cout << sizeof(b) << endl;

  c.value = 45;
  strcpy(c.string, "kanishk");
  cout << sizeof(c) << endl;

  return 0;
}
