#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr{10, 20, 30, 40, 40, 50};

  for (size_t i = 0; i < arr.size(); i++)
  {
    int firstElement = arr[i];

    for (size_t j = i + 1; j < arr.size(); j++)
    {
      int secondElement = arr[j];

      for (size_t k = j + 1; k < arr.size(); k++)
      {
        int lastElement = arr[k];

        // cout << "Pairs are (" << firstElement << ", " << secondElement << ", " << lastElement << ")" << endl;

        if (firstElement + secondElement + lastElement == 80)
        {
          cout << "Pairs with sum 80 are (" << firstElement << ", " << secondElement << ", " << lastElement << ")" << endl;
        }
      }
    }
  }

  return 0;
}