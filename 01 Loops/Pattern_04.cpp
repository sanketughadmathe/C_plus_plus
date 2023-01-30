#include <iostream>
using namespace std;

int main()
{

  /*
  Printing:
    A
    BC
    DEF
    GHIJ
  */

  int n;
  cout << "Enter the value of n: " << endl;
  cin >> n;

  int row = 1;

  char ch = 'A';

  while (row <= n)
  {
    int col = 1;

    while (col <= row)
    {
      cout << ch;
      ch++;
      col++;
    }
    cout << endl;
    row++;
  }
}