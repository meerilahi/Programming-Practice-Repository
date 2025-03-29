#include <iostream>
using namespace std;

void quickSort(int array[], int low, int hi)
{

      if (low < hi)
      {
            int pivot = hi;

            for (int i = low; i < hi; i++)
            {

                  if (array[i] >= pivot)
                  {
                        int temp = array[i];
                        array[i] = array[i + 1];
                        array[i + 1] = temp;
                  }
            }

            quickSort(array, low, hi - 1);
      }
      else
      {
            return;
      }
}

main()
{
      int array[10] = {8, 6, 3, 4, 7, 5, 9, 1, 0, 2};
      quickSort(array, 0, 9);
      for (int i = 0; i < 10; i++)
      {
            cout << array[i] << "";
      }
}