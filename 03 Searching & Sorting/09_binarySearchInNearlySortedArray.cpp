#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
  int start = 0;
  int end = arr.size() - 1;
  int mid = start + (end - start) / 2;

  while (start <= end)
  {

    if (target == arr[mid])
      return mid;
    if (target == arr[mid - 1])
      return mid - 1;
    if (target == arr[mid + 1])
      return mid + 1;

    if (target < arr[mid])
      end = mid - 2;

    if (target > arr[mid])
      start = mid + 2;
    mid = start + (end - start) / 2;
  }

  return -1;
}

int main()
{
  vector<int> arr{10, 3, 40, 20, 50, 80, 70};
  int target = 200;

  int ans = binarySearch(arr, target);
  cout << "Index of " << target << " is " << ans;

  return 0;
}