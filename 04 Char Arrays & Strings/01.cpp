#include <iostream>
using namespace std;

int main()
{
  char name[100];
  cout << "Enter your name: " << endl;
  cin.getline(name, 20);

  for (size_t i = 0; i < 10; i++)
  {
    cout << name[i];
  }

  return 0;
}