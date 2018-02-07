#include <iostream>

using namespace std;

//function prototypes
void function1(void);
void function2(int);
long function3();
long function4(int);

//driver function
int main(void)
{
  /* code */
  function1();
  function2(5);

  cout << function3() << endl;
  cout << function4(7) << endl;


  if(isPalindrome(5465)
  {i
    std::cout << "yes" << '\n';
  }
  else
  {
    std::cout << "no" << '\n';
  }

  return 0;
}

//function definitions
void function1(void)
{
  //printing functions
  cout << "this is a normal void function which doesn't take any arguments." << endl;
}

void function2(int n)
{
  for(int i = 0; i < n; i++)
  {
    cout << i + 1 << endl;
  }
}

long function3()
{
  long a, b, sum;

  cout << "enter a : "; cin >> a;
  cout << "enter b : "; cin >> b;

  sum = a + b;
  return sum;
}

long function4(int n)
{
  long fact = 1;
  for (int i = 1; i <= n; i++)
  {
    /* code */
    fact *= i;
  }

  return fact;
}
