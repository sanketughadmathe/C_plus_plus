#include <iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int target)
// {
//   int start = 0;
//   int end = size - 1;

//   int mid = start + (end - start) / 2;

//   while (start < end)
//   {
//     int element = arr[mid];

//     if (element == target)
//     {
//       return mid;
//     }
//     else if (target < element)
//     {
//       end = mid - 1;
//     }
//     else
//     {
//       start = mid + 1;
//     }
//   }
// }

// int main()
// {
//   int arr[] = {2, 4, 6, 8, 10, 12, 16};
//   int size = 7;
//   int taget = 2;

//   int indexOfTarget = binarySearch(arr, size, target);

//   if (indexOfTarget == -1)
//   {
//     cout << "Target not found" << endl;
//   }
//   else
//   {
//     cout << "Target found at " << indexOfTarget << " index" << endl;
//   }
// }