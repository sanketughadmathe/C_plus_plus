#include <iostream>
using namespace std;

int main()
{

  /*
  Printing:
    A
    BC
    CDE
    DEFG
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

    while (col <= row)
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