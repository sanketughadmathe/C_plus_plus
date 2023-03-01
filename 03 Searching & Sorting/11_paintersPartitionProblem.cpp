#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int mid, int arrSize, int p)
{
  int painterCount = 1;
  int partitionSum = 0;

  for (size_t i = 0; i < arrSize; i++)
  {
    if (partitionSum + arr[i] <= mid)
      partitionSum += arr[i];
    else
    {
      painterCount++;
      if ((painterCount > p) || (arr[i] > mid))
        return false;
      partitionSum = arr[i];
    }
  }
  return true;
}

int allocatePartition(vector<int> arr, int n, int p)
{
  int s = 0;
  int sum = 0;

  for (size_t i = 0; i < n; i++)
    sum += arr[i];
  int e = sum;
  int ans = -1;
  int mid = s + (e - s) / 2;

  while (s <= e)
  {
    if (isPossible(arr, mid, n, p))
    {
      ans = mid;
      e = mid - 1;
    }
    else
      s = mid + 1;
    mid = s + (e - s) / 2;
  }
  return ans;
}

int main()
{
  vector<int> arr = {5, 5, 5, 5};
  int n = 4;
  int p = 2;
  int ans = allocatePartition(arr, n, p);

  cout << "Minimum Partition to be alloted is: " << ans << endl;
  return 0;
}