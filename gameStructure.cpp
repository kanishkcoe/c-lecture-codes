#include <iostream>
#include <string.h>

using namespace std;

struct Game
{
  long g_code;
  char g_name[30];
  int fee;
  int duration;
};

void input(Game &g)
{
  cout << "Enter game code : "; cin >> g.g_code;
  cin.ignore();
  cout << "Enter game name : "; cin.getline(g.g_name, 20);

  //logic for fee and duration
  //g.g_name == "table tennis"
  if(strcmp(g.g_name, "table tennis") == 0)
  {
    g.fee = 24000;
    g.duration = 3;
  }
  else if(strcmp(g.g_name, "swimming") == 0)
  {
    g.fee = 30000;
    g.duration = 1;
  }
  else if(strcmp(g.g_name, "football") == 0)
  {
    g.fee = 25000;
    g.duration = 2;
  }
  else
  {
    g.fee = 0;
    g.duration = 0;
  }
}


void output(Game g)
{
  cout << "Game code : " << g.g_code << endl;
  cout << "Game name : " << g.g_name << endl;
  cout << "Game fee : " << g.fee << endl;
  cout << "Game duration : " << g.duration << endl;
}

int main()
{
  Game g[4];

  for(int i = 0; i < 4; i++)
  {
    cout << "Enter details for game "<< i + 1 <<" : " << endl;
    input(g[i]);
  }

  for(int i = 0; i < 4; i++)
  {
    output(g[i]);
  }

  return 0;
}
