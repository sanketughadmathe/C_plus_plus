#include <iostream>
using namespace std;

int findSqrt(int n)
{
  int start = 0;
  int end = n;
  int mid = start + (end - start) / 2;
  int ans = -1;
  int target = n;

  while (start <= end)
  {
    int element = mid * mid;

    if (target == element)
      return mid;

    if (target < element)
      end = mid - 1;

    else if (target > element)
    {
      ans = mid;
      start = mid + 1;
    }

    mid = start + (end - start) / 2;
  }
  return ans;
}

int main()
{
  int n;
  cout << "Enter the no, " << endl;
  cin >> n;
  int ans = findSqrt(n);
  cout << "Ans is " << ans << endl;
}