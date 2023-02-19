#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;

  while (start <= end)
  {
    int element = arr[mid];

    if (target == element)
      return start;

    else if (target < element)
      end = mid - 1;

    else if (target > element)
      start = mid + 1;

    mid = start + (end - start) / 2;
  }
  return -1;
}

int main()
{
  int arr[] = {6, 8, 10};
  // {2, 4, 6, 8, 10, 12, 16};
  int size = 3;
  int target = 10;

  int indexOfTarget = binarySearch(arr, size, target);

  if (indexOfTarget == -1)
  {
    cout << "Target not found" << endl;
  }
  else
  {
    cout << "Target found at " << indexOfTarget << " index" << endl;
  }
}