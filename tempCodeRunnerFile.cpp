#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;  
    int end = size - 1; 
    int mid;
    while ( start <= end)  
    {  
        mid = (start + end) / 2;

        if (arr[mid] == target)
            return start;  

        else if (arr[mid] < target)  
            end = mid - 1;  

        else if (arr [mid] > target)  
            start = mid + 1;  

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