#include <iostream>
using namespace std;

int main()
{

  /*
  Printing:
       1
      22
     333
    4444
  */

  int n;
  cout << "Enter the value of n: " << endl;
  cin >> n;

  int row = 1;
  int count = 1;

  while (row <= n)
  {

    int col = 1;
    int spaces = n - 1;

    while (spaces >= row)
    {
      cout << " ";
      spaces--;
    }

    while (col <= row)
    {
      cout << count;
      col++;
      count++;
    }
    cout << endl;
    row++;
  }
}