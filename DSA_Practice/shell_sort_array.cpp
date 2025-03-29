#include <iostream>
using namespace std;

// Not completed

void swape(int &a, int &b)
{
      int temp = a;
      a = b;
      b = temp;
}

void shellSort(int array[], int size, int gap)
{

      while (gap > 0)
      {
            for (int i = 0; i < size; i++)
            {
                  if (array[i] > array[i + gap])
                  {
                        swape(array[i], array[i + gap]);
                  }
            }
            gap /= 2;
      }

}

main()
{
      int array[10] = {86, 6, 983, 4, 7, 5, 9, 1, 0, 2};

      shellSort(array, 10, 5);

      for (int i = 0; i < 10; i++)
      {
            cout << array[i] << " ";
      }
}