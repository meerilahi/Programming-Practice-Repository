#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{

      for (int i = 0; i < size; i++)
      {
            for (int j = i; j < size; j++)
            {
                  if (arr[i] > arr[j])
                  {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                  }
            }
      }
}

main()
{
      int arr[10] = {10, 3, 6, 2, 9, 4, 1, 7, 5, 8};
      selectionSort(arr, 10);
      for (int i = 0; i < 10; i++)
      {
            cout << arr[i] << " ";
      }
}