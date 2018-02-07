#include <iostream>

using namespace std;

int g = 20; //let it be k = 20 (changable call by refrence by default)

void function(int &x, int y)  //x is refrence and y is value
{
  //y will not change until it's static or global
  x = x - y;  //1. x = -13| 2. x = 33
  y = 10 * x; //1. y = -130| 2. y = 330
  
  cout << x << " " << y <<  endl;
  //-13 -130
  //20 330
}

int main()
{
  int g = 7;  //g = 7, local g
  function(g, ::g); //both g's will change g = -13, ::g = -130
  cout << g << " " << ::g <<  endl;
  //-13 20
  function(::g, g); //::g will change but g will not
  cout << g << " " << ::g <<  endl;
  //-13 330
}

//-13 -130
//-13 -130
//117 1170
//-13 117
