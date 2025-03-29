#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int getDigit(int num, int posFromRight, int max)
{
      if (posFromRight < 1)
      {
            return -1;
      }
      int numDigits = static_cast<int>(log10(num)) + 1;
      if (posFromRight > numDigits && posFromRight <= max)
      {
            return 0;
      }
      if (posFromRight > numDigits)
      {
            return -1;
      }
      int digit = (num / static_cast<int>(pow(10, posFromRight - 1))) % 10;
      return digit;
}

void radixSort(int array[], int size)
{
      // Finding Max Number
      int max = INT_MIN;
      for (int i = 0; i < size; i++)
      {
            if (array[i] > max)
            {
                  max = array[i];
            }
      }

      // Finding Numbers of Digits in max number
      int digits = (log10(max)) + 1;

      queue<int> buckets[10];

      // Each iteration is for single digit starting from least signigicat
      for (int i = 1; i <= digits; i++)
      {
            // Putting all elements in thier respective queues
            for (int j = 0; j < size; j++)
            {
                  int buckInd = getDigit(array[j], i, digits);
                  buckets[buckInd].push(array[j]);
            }

            // Shifting all elements from queues to the array
            int index = 0;
            for (int j = 0; j < 10; j++)
            {

                  while (!buckets[j].empty())
                  {
                        array[index] = buckets[j].front();
                        buckets[j].pop();
                        index++;
                  }
            }
      }
}

main()
{
      int array[10] = {86, 6, 983, 4, 7, 5, 9, 1, 0, 2};

      radixSort(array, 10);

      for (int i = 0; i < 10; i++)
      {
            cout << array[i] << " ";
      }
}