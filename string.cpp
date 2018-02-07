#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int stringlen(char *s)
{
  int count = 0;

  for(int i = 0; s[i] != NULL; i++)
  {
    count++;
  }
  return count;
}

char* stringConcate(char *a, char *b)
{
  //this function concatinate two strings
  char newstring[50];
  int len = 0;

  for(int i = 0; a[i] != NULL; i++)
  {
    newstring[len] = a[i];
    len++;
  }

  for(int i = 0; b[i] != NULL; i++)
  {
    newstring[len] = b[i];
    len++;
  }

  newstring[len] = NULL;
  cout << newstring;
  return newstring;
}

int main()
{
  // char string1[] = {"kanishk "};
  // char string2[] = {"debnath"};
  // char sumstring[50];
  // strcpy(sumstring, stringConcate(string1, string2));
  // cout << "Concatinated string is - " << sumstring << endl;

  char string[10];
  int n;

  cout << "number : ";
  cin >> n;
  cin.ignore();
  cout << "String : ";
  gets(string);
  cout << endl;
  cout << n << endl;
  cout << string << endl;
}
