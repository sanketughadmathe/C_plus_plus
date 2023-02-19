#include <iostream>
#include <vector>
using namespace std;

int finPivot(vector<int> arr)
{
  int start = 0;
  int end = arr.size() - 1;
  int mid = start + (end - start) / 2;
  int size = arr.size();

  while (start <= end)
  {
    if ((mid + 1 < arr.size()) && (arr[mid] > arr[mid + 1]))
    {
      return mid;
    }
    else if ((mid - 1 >= 0) && (arr[mid - 1] > arr[mid]))
    {
      return mid - 1;
    }
    else if (arr[start] > arr[mid])
    {
      end = mid - 1;
    }
    else if (arr[start] < arr[mid])
    {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

int main()
{
  vector<int> arr{6, 8, 10, 0, 1, 2, 3, 4, 5};

  int ans = finPivot(arr);

  cout << "Pivot element is " << arr[ans] << endl;
}