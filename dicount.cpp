#include <iostream>

using namespace std;

float sellingPrice(float costPrice, float discount)
{
  return costPrice * (100 - discount) / 100;
}

int main()
{
  float costPrice, discount;

  cout << "Cost Price : "; cin >> costPrice;

  if(costPrice > 10000)
  {
    discount = 15.00;
  }
  else if(costPrice <= 10000 && costPrice > 5000)
  {
    discount = 10.00;
  }
  else if(costPrice <= 5000 && costPrice > 1000)
  {
    discount = 5.00;
  }
  else
  {
    discount = 3.00;
  }

  cout << "Selling Price : " << sellingPrice(costPrice, discount) << endl;
  return 0;
}
