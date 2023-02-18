#include <iostream>
using namespace std;

int main()
{
  int n;
  int count = 0;
  int search;

  int arr[5];

  cout << "Enter value of n: " << endl;
  cin >> n;

  cout << "Enter the elements of array " << endl;

  for (size_t i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Enter the element to search: " << endl;
  cin >> search;

  for (size_t i = 0; i < n; i++)
  {
    if (arr[i] == search)
    {
      count++;
    }
  }
  cout << search << " found " << count << " times.";
}