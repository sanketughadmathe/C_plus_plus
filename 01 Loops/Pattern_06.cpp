#include <iostream>
using namespace std;

int main()
{

  /*
  Printing:
    D
    CD
    BCD
    ABCD
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
    char ch = 'A' + n - row;

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