#include <iostream>
using namespace std;

void mergerArrays(int array[], int l, int m, int r)
{
      int size1 = m - l + 1;
      int size2 = r - m;

      int *arr1 = new int[size1];
      int *arr2 = new int[size2];

      for (int i = 0; i < size1; i++)
      {
            arr1[i] = array[i + l];
      }
      for (int i = 0; i < size2; i++)
      {
            arr2[i] = array[i + m + 1];
      }

      int i = 0;
      int j = 0;
      int k = l;

      while (i < size1 && j < size2)
      {
            if (arr1[i] < arr2[j])
            {
                  array[k] = arr1[i];
                  i++;
            }
            else
            {
                  array[k] = arr2[j];
                  j++;
            }
            k++;
      }

      while (i < size1)
      {
            array[k] = arr1[i];
            i++;
            k++;
      }
      while (j < size2)
      {
            array[k] = arr2[j];
            j++;
            k++;
      }
}

void mergerSort(int array[], int l, int r)
{
      if (l < r)
      {
            int m = (l + r) / 2;
            mergerSort(array, l, m);
            mergerSort(array, m + 1, r);
            mergerArrays(array, l, m, r);
      }
}

main()
{
      int array[8] = {6, 3, 8, 1, 0, 4, 10, 7};
      mergerSort(array, 0, 7);
      for (int i = 0; i < 8; i++)
      {
            cout << array[i] << "";
      }
}