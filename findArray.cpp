#include <iostream>
#define SIZE 40


using namespace std;

int findArray(int a[], int n, int num)
{
  for(int i = 0; i < n; i++)
  {
    if(a[i] == num)
    {
      return 1;
    }
  }

  return 0;
}

int main()
{
  int a[SIZE];
  int n;
  int num;

  cout << "Enter the size ( < 40) : "; cin >> n;

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  cout << "Enter the number to be checked : "; cin >> num;
  cout << "check = " << findArray(a, n, num) << endl;

  return 0;
}
