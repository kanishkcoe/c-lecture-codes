#include <iostream>
#include <stdio.h>

#define SIZE 2

using namespace std;

struct Faculty
{
  int id;
  char name[20];
  char subject[20];
  float salary;
};

void input(struct Faculty &m)
{
  cout << "Enter ID : "; cin >> m.id;
  cin.ignore();
  cout << "Enter name : "; gets(m.name);
  cout << "Enter subject : "; gets(m.subject);
  cout << "Enter salary : "; cin >> m.salary;
}

void output(struct Faculty m)
{
  cout << "ID : " << m.id << endl;
  cout << "name : " << m.name << endl;
  cout << "subject : " << m.subject << endl;
  cout << "salary : " << m.salary << endl;
}

int main()
{
  Faculty members[SIZE];

  for(int i = 0; i < SIZE; i++)
  {
    input(members[i]);
  }

  for(int i = 0; i < SIZE; i++)
  {
    if(members[i].salary > 10000)
    {
      output(members[i]);
    }
  }

  return 0;
}
