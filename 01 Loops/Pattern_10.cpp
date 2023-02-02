#include <iostream>
using namespace std;

int main()
{

  /*
  Printing:
    1234
     234
      34
       4
  */

  int n;
  cout << "Enter the value of n: " << endl;
  cin >> n;

  int row = 1;

  while (row <= n)
  {
    int col = row;
    int space = 1;
    while (space <= row - 1)
    {
      cout << " ";
      space++;
    }

    while (col <= n)
    {
      // char ch = ('*' * (n - row + 1));
      cout << col;
      col++;
    }
    cout << endl;
    row++;
  }
}