#include <iostream>
using namespace std;

int main()
{
  char ch;
  cout << "Enter alpha-numeric character:  ";
  cin >> ch;

  if (ch > 96 && ch < 123)
  {
    cout << "This is Lowercase";
  }
  else if (ch > 64 && ch < 91)
  {
    cout << "This is Uppercase";
  }
  else if (ch > 47 && ch < 58)
  {
    cout << "This is numeric";
  }
  else
  {
    cout << "Please enter only alpha-numeric!";
  }
}