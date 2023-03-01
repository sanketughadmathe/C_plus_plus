#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char name[100];
  cout << "Enter your name: " << endl;
  cin.getline(name, 100);

  int n = strlen(name);

  for (size_t i = 0; i < n; i++)
  {
    if (name[i] == ' ')
      name[i] = '@';
  }
  cout << "Name: " << name << endl;
  return 0;
}