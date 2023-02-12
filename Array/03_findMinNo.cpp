#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
  int arr[8];
  int n;
  int min_value = INT_MAX;

  cout << "Enter the size of array: " << endl;
  cin >> n;

  cout << "Enter the values: " << endl;

  for (size_t i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (size_t i = 0; i < n; i++)
  {
    if (arr[i] < min_value)
    {
      min_value = arr[i];
    }
  }
  cout << "Min value in array is : " << min_value;
}