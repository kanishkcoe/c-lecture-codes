#include <iostream>
#include <stdio.h>

using namespace std;

struct Student
{
  char name[20];
  int age;
  float marks[3];
  float avg;
};

Student input()
{
  Student stud;

  cin.ignore();
  cout << "Enter name : "; gets(stud.name);
  cout << "Enter age : "; cin >> stud.age;

  for(int j = 0; j < 3; j++)
  {
    cout << "Enter marks for subject " << j + 1 << " : "; cin >> stud.marks[j];
    stud.avg += stud.marks[j];
  }

  stud.avg /= 3;

  return stud;
}

void output(Student std)
{
  cout << "Name : " << std.name << endl;
  cout << "Age : " << std.age << endl;
  for(int j = 0; j < 3; j++)
  {
    cout << "Marks of subject " << j + 1 << " : " << std.marks[j] << endl;
  }
}

int main()
{
  Student std[3];

  //input processes
  for(int i = 0; i < 3; i++)
  {
    cout << "student #" << i + 1 << endl;
    std[i] = input();
  }

  for(int i = 0; i < 3; i++)
  {
    if(std[i].avg >= 85.0)
    {
      output(std[i]);
    }
  }
}
