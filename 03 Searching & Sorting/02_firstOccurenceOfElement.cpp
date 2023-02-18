#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int target)
{
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  int ans = -1;

  while (start <= end)
  {
    int element = arr[mid];

    if (element == target)
    {
      ans = mid;
      end = mid - 1;
    }
    else if (target < element)
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }

    mid = mid / 2;
  }
  return ans;
}

int main()
{
  int arr[] = {2, 4, 4, 6, 8, 10, 12, 16};
  int size = 7;
  int target = 2;

  int indexOfTarget = firstOccurence(arr, size, target);

  if (indexOfTarget == -1)
  {
    cout << "Target not found" << endl;
  }
  else
  {
    cout << "Target found at " << indexOfTarget << " index" << endl;
  }
}