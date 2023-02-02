#include <iostream>
using namespace std;

int main()
{

  /*
  Printing:

    *****
    ****
    ***
    **
    *
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

    while (col >= row)
    {
      // char ch = ('*' * (n - row + 1));
      cout << '*';
      col--;
    }
    cout << endl;
    row++;
  }
}