#include <iostream>
#include <vector>
using namespace std;

int finPivot(vector<int> arr)
{
  int start = 0;
  int end = arr.size() - 1;
  int mid = start + (end - start) / 2;

  while (start <= end)
  {
    if ((mid - 1 < arr.size()) && (arr[mid] > arr[mid + 1]))
      return mid;

    if ((mid - 1 >= 0) && (arr[mid - 1] > arr[mid]))
      return mid - 1;

    if (arr[start] > arr[mid])
      end = mid - 1;

    else
      start = mid + 1;

    mid = start + (end - start) / 2;
  }
  return -1;
}

int binarySearch(vector<int> arr, int target, int start, int end)
{

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
  vector<int> arr{6, 8, 10, 0, 1, 2, 3, 4, 5};
  int target = 10;
  int indexOfTarget = -1;
  int pivot = finPivot(arr);
  int a = arr[0];
  int b = arr[pivot];

  cout << "Pivot " << arr[pivot] << endl;

  if (target >= arr[0] && target <= arr[pivot])
    indexOfTarget = binarySearch(arr, target, 0, pivot);

  else if (target >= arr[pivot + 1] && target < arr[arr.size() - 1])
    indexOfTarget = binarySearch(arr, target, pivot, arr.size() - 1);

  if (indexOfTarget == -1)
    cout << "Target not found" << endl;

  else
    cout << "Target found at " << indexOfTarget << " index" << endl;
}