#include <iostream>
using namespace std;

int main()
{

  /*
  Printing:
    1111
     222
      33
       4
  */

  int n;
  cout << "Enter the value of n: " << endl;
  cin >> n;

  int row = 1;

  char ch = 'A';
  // cout << ch << endl;

  while (row <= n)
  {
    int col = n;
    int space = 1;
    while (space <= row - 1)
    {
      cout << " ";
      space++;
    }

    while (col >= row)
    {
      // char ch = ('*' * (n - row + 1));
      cout << row;
      col--;
    }
    cout << endl;
    row++;
  }
}