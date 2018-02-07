//this project is made by kanishk
//this project helps in checking for a vowel

#include <iostream>

using namespace std;

//function prototype
int isVowel(char);

//main driver function
int main()
{
  char ch;

  cout << "Enter a character : "; cin >> ch;

  if(isVowel(ch))
  {
    cout << "It's a vowel." << endl;
  }
  else
  {
    cout << "No it's not a vowel." << endl;
  }
  return 0;
}

//function to check for vowel
int isVowel(char ch)
{
  //
  switch(ch)
  {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': return 1;
    default : return 0; //takes all other characters
  }
}
