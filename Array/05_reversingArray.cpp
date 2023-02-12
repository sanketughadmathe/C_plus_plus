#include <iostream>
using namespace std;

int main()
{
  int arr[8] = {1, 3, 5, 7, 8, 6, 4, 2};
  int size = 8;
  int start = 0;
  int end = size - 1;

  while (start <= end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }

  for (size_t i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}