#include <iostream>
using namespace std;

void insertionSortLogic1(int arr[], int size)
{
      for (int i = 1; i < size; i++)
      {
            if (arr[i] < arr[i - 1])
            {
                  int current = arr[i];
                  int last = arr[i - 1];

                  for (int j = 0; j < i; j++)
                  {

                        if (current < arr[j])
                        {
                              int temp = arr[j];
                              arr[j] = current;
                              current = arr[j + 1];
                              arr[j + 1] = temp;
                        }
                  }
                  arr[i] = last;
            }
      }
}

void insertionSortLogic2(int arr[], int size)
{

      for (int i = 1; i < size; i++)
      {
            int current = arr[i];

            int j = i - 1;

            while (arr[j] > current && j >= 0)
            {
                  arr[j + 1] = arr[j];
                  j--;
            }

            arr[j + 1] = current;
      }
}

main()
{
      int arr[10] = {6, 4, 12, 1, 7, 5, 9, 3, 8, 2};
      insertionSortLogic2(arr, 10);
      for (int i = 0; i < 10; i++)
      {
            cout << arr[i] << "";
      }
}