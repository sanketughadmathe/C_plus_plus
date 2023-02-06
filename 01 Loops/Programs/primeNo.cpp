#include <iostream>
using namespace std;

void primeCheck(int n)
{
  bool primeFlag;
  for (size_t i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      primeFlag = false;
      break;
    }
  }
  if (primeFlag)
  {
    cout << "No. is Prime!";
  }
  else
  {
    cout << "Not a Prime no.";
  }
}

int main()
{
  int n;
  cout << "Enter a number : ";
  cin >> n;
  primeCheck(n);
}