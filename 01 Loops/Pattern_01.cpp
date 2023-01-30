#include <iostream>
using namespace std;

int main()
{

  /*
  Printing:
    ABC
    ABC
    ABC
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
      char ch2 = 'A' + row - 1;
      cout << ch2;
      col++;
    }
    cout << endl;
    row++;
  }
}