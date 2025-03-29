#include <iostream>
using namespace std;

void countSort(int array[], int size, int maxValue)
{
      int *counts = new int[maxValue];

      for (int i = 0; i < maxValue; i++)
      {
            counts[i] = 0;
      }

      for (int i = 0; i < size; i++)
      {
            int num = array[i];
            counts[num]++;
      }

      for (int i = 1; i < maxValue; i++)
      {
            counts[i] += counts[i - 1];
      }

      int *outPut = new int[size];

      for (int i = 0; i < size; i++)
      {
            int ps = counts[array[i]] - 1;

            outPut[ps] = array[i];
      }

      for (int i = 0; i < size; i++)
      {
            array[i] = outPut[i];
      }
}

main()
{
      int array[10] = {8, 6, 3, 4, 7, 5, 9, 1, 0, 2};
      countSort(array, 10, 100);
      for (int i = 0; i < 10; i++)
      {
            cout << array[i] << "";
      }
}