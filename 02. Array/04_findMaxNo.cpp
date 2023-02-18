#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
  int arr[8];
  int n;
  int max_value = INT_MIN;

  cout << "Enter the size of array: " << endl;
  cin >> n;

  cout << "Enter the values: " << endl;

  for (size_t i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (size_t i = 0; i < n; i++)
  {
    if (arr[i] > max_value)
    {
      max_value = arr[i];
    }
  }
  cout << "Min value in array is : " << max_value;
}