#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
      for (int i = 0; i < size; i++)
      {
            for (int j = 0; j < size - i - 1; j++)
            {
                  if (arr[j] > arr[j + 1])
                  {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                  }
            }
      }
}
void optimizeBubbleSort(int arr[], int size)
{
      bool sorted = false;

      for (int i = 0; i < size && !sorted; i++)
      {
            sorted = true;

            for (int j = 0; j < size - i - 1; j++)
            {

                  if (arr[j] > arr[j + 1])
                  {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                        sorted = false;
                  }
            }
      }
}

main()
{

      int arr[10] = {9, 2, 4, 6, 1, 8, 5, 7, 0, 3};

      optimizeBubbleSort(arr, 10);

      for (int i = 0; i < 10; i++)
      {
            cout << arr[i] << " ";
      }
}