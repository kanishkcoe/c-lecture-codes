#include <iostream>

using namespace std;

struct Time
{
  int hours;
  int minutes;
  int seconds;
};

//function prototype
struct Time input(int);
void show(struct Time);

int main()
{
  struct Time currentTime;
  int n;
  cout << "Enter time in seconds : "; cin >> n;
  currentTime = input(n);
  show(currentTime);
  return 0;
}

//function definition
struct Time input(int a)
{
  struct Time temp;

  //logic
  temp.hours = a / 3600;
  a = a % 3600;
  temp.minutes = a / 60;
  temp.seconds = a % 60;

  return temp;
}

void show(struct Time d)
{
  cout << d.hours << " : " << d.minutes << " : " << d.seconds << endl;
}
