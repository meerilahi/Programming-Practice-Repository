#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int value)
{

      for (int i = 0; i < size; i++)
      {
            if (arr[i] == value)
            {
                  return i;
            }
      }
      return -1;
}

main()
{
      int arr[5] = {10, 20, 30, 40, 50};
      int result = linearSearch(arr, 5, 30);
      cout << result;
}