#include <iostream>

using namespace std;

int main()
{
  int count = 0;
  int countPresest = 0;
  int currency[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
  int amount;
  
  cout << "Enter amount : "; cin >> amount;

  for(int i = 0; i < 10; i++)
  {
    countPresest = amount / currency[i];
    count += amount / currency[i];
    if(countPresest != 0)
      cout << currency[i] << " notes : " << countPresest << endl;

    amount %= currency[i];
  }

  cout << "Currency notes required = " << count << endl;
  return 0;
}
