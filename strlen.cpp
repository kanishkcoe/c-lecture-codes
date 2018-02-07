#include <iostream>

using namespace std;

int stringlen(char*);
int stringcompare(char*, char*);
char * stringconcatinate(char*, char*);
int main()
{
  char name[20];
  cin.getline(name, 20);
  cout << stringlen(name) << endl;

  for(int i = 0; i <= stringlen(name); i++)
  {
    cout.write(name, i);
    cout << endl;
  }

  if(stringcompare("kanishk", "abhinav") == 1)
  {
    cout << "Same" << endl;
  }
  else
  {
    cout << "Different" << endl;
  }

  char * sum;
  sum = stringconcatinate("kanishk ", "debnath");
  cout << sum << endl;
  return 0;
}

int stringlen(char * str)
{
  int count = 0;

  for (int i = 0; str[i] != NULL; i++)
  {
    count++;
  }

  return count;
}

int stringcompare(char* a, char* b)
{
  int alen = stringlen(a);
  int blen = stringlen(b);

  if(alen != blen)
  {
    return 0;
  }

  for(int i = 0; i < alen; i++)
  {
    if(a[i] != b[i])
    {
      return 0;
    }
  }

  return 1;
}

char * stringconcatinate(char* a, char* b)
{
  int size = stringlen(a) + stringlen(b);
  char *add;
  add = new char[size + 1];

  int index = 0;
  int i = 0;
  int j = 0;

  while(i < stringlen(a))
  {
    add[index] = a[i];
    index++;
    i++;
  }

  while(j < stringlen(b))
  {
    add[index] = b[j];
    index++;
    j++;
  }
  add[index] = NULL;

  return add;
}
