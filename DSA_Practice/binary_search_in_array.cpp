#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int value)
{
      int start = 0;
      int end = size;
      int mid;

      while (start < end)
      {
            mid = start + (end - start) / 2;

            if (arr[mid] == value)
            {
                  return mid;
            }
            if (arr[mid] > value)
            {
                  end = mid - 1;
            }
            else if (arr[mid] < value)
            {
                  start = mid + 1;
            }
      }

      return -1;
}

main()
{
      int arr[5] = {10, 20, 30, 40, 50};
      int result = binarySearch(arr, 5, 50);
      cout << result;
}