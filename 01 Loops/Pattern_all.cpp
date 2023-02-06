/*

Q12.
Printing pattern
  *
  * 1 *
  * 1 2 1 *
  * 1 2 3 2 1 *
  * 1 2 1 *
  * 1 *
  *
*/

#include <iostream>
using namespace std;

int main()
{
  int i;
  int j;
  int n = 9;

  // cout << "Enter the value of n: " << endl;
  // cin >> n;

  for (int i = 0; i <= n / 2; i++)
  {

    for (int j = 0; j < (2 * i) + 1; j++)
    {
      // if (i == 0 || i == n - 1)
      // {
      //   cout << "* ";
      // }
      // else
      if (j == 0)
      {
        cout << "* ";
      }
      else if (j == (2 * i))
      {
        // cout << j << " ";

        // Number
        // for (int k = 0; k < i / 2; k++)
        // {
        //   cout << k;
        // }

        // Reverse Number
        // for (int j = 0; j <= i; j++)
        // {
        //   if (i - j != 0)
        //   {
        //     cout << i - j << " ";
        //   }
        // }
      }
      else
      {

        cout << j << " ";
      }
    }
    cout << endl;
  }
}