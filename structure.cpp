#include <iostream>
#include <stdio.h>

using namespace std;

struct Employee
{
  char name[20];
  int age;
  float salary;
  int department[3];
}kunal;

void input(Employee *emp)
{
  cin.ignore();
  cout <<"Enter name : "; gets(emp->name);
  cout << "Enter age : "; cin >> emp->age;
  cout << "Enter salary : "; cin >> emp->salary;

  for(int i = 0; i < 3; i++)
  {
    cout << "Enter department " << i + 1 << " code : ";
    cin >> emp->department[i];
  }

}

void output(Employee emp)
{
  cout << "-----------------------------" << endl;
  cout << "name : " << emp.name << endl;
  cout << "age  : " << emp.age << endl;
  cout << "salary : " << emp.salary << endl;

  for(int i = 0; i < 3; i++)
  {
    cout << "department " << i + 1 <<" code  : " << emp.department[i] << endl;
  }

  cout << "-----------------------------" << endl;
}

int main()
{
  struct Employee bande[3];
  for(int i = 0; i < 3; i++)
  {
    cout << "banda #"<<i+1<<endl;
    input(&bande[i]);
  }

  for(int i = 0; i < 3; i++)
  {
    if(bande[i].salary <= 1000)
    {
      cout << "banda #"<<i+1<<endl;
      output(bande[i]);
    }
  }

  input(&kunal);
  output(kunal);
}
