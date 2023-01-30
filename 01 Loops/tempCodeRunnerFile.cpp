#include <iostream>
using namespace std;

int main()
{

  /*
  Printing:
    ABC
    DEF
    GHI
  */

  int n;
  cout << "Enter the value of n: " << endl;
  cin >> n;

  int row = 1;

  char ch = 'A';
  // cout << ch << endl;

  while (row <= n)
  {
    int col = 1;

    while (col <= n)
    {
      char ch = 'A' + col + row - 2;
      cout << ch;
      ch++;
      col++;
    }
    cout << endl;
    row++;
  }
}