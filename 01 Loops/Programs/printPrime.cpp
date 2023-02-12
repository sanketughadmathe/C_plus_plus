#include <iostream>
using namespace std;

int primeCheck(int n)
{
  bool primeFlag = 1;
  for (size_t i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      primeFlag = 0;
      break;
    }
  }
  return primeFlag;
}

void printPrime(int n)
{
  int primeFound = 0;
  for (size_t i = 0; i <= n; i++)
  {
    int isPrime = primeCheck(n);

    if (isPrime)
    {
      cout << i;
    }
    // if (primeFound)
    // {
    //   cout << n;
    // }
    // else
    // {
    //   cout << "No prime no.";
    // }
  }
}

int main()
{
  int n;
  cout << "Enter a number : ";
  cin >> n;
  // int isPrime = primeCheck(n);
  // cout << isPrime;
  // printPrime(n);
  for (size_t i = 2; i <= n; i++)
  {
    bool isiPrime = primeCheck(i);
    if (isiPrime)
    {
      cout << i << endl;
    }
  }
}