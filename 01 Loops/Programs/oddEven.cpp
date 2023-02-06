#include <iostream>
using namespace std;

void oddEven(int n)
{
  if (n % 2 == 0)
  {
    cout << endl
         << "No. is Even!";
  }
  else
  {
    cout << endl
         << "No.is Odd!";
  }
}

int main()
{
  int n;
  cout << "Enter a number : ";
  cin >> n;
  oddEven(n);
}