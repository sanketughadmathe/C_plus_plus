#include <iostream>
using namespace std;

int main()
{
  int arr[5];
  int n;
  int search;
  bool searchFound = false;

  cout << "Enter value of n: " << endl;
  cin >> n;

  cout << "Enter the elements of array " << endl;

  for (size_t i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Enter the no to search: " << endl;
  cin >> search;

  for (size_t i = 0; i < n; i++)
  {
    if (arr[i] == search)
    {
      cout << "Found!";
      searchFound = true;
      break;
    }
  }
  if (!searchFound)
  {
    cout << "Not found!";
  }
}