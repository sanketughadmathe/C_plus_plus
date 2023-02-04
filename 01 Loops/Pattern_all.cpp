/*
Printing pattern
            *
          *   *
        *   *   *
      *   *   *   *
    *   *   *   *   *
  *   *   *   *   *   *
  *   *   *   *   *   *
    *   *   *   *   *
      *   *   *   *
        *   *   *
          *   *
            *
*/

#include <iostream>
using namespace std;

int main()
{
  int i;
  int j;
  int n;
  cout << "Enter the value of n: " << endl;
  cin >> n;

  for (int i = 0; i < n; i++)
  {

    // Spaces
    for (int space = 0; space < n - i - 1; space++)
    {
      cout << " ";
    }

    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++)
  {

    // Spaces
    for (int space = 0; space < i; space++)
    {
      cout << " ";
    }

    for (int j = 0; j <= n - i - 1; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}