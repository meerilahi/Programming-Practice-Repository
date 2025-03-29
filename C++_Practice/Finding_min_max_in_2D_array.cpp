#include <iostream>
using namespace std;
main()
{
   int list[3][3];
   for (int r = 0; r < 3; r++)
   {
      cout << "Enter numbers for " << r + 1 << " row." << endl;
      for (int c = 0; c < 3; c++)
      {
         cin >> list[r][c];
      }
   }

   cout << "2D Array is: \n";
   for (int r = 0; r < 3; r++)
   {
      for (int c = 0; c < 3; c++)
      {
         cout << list[r][c] << "\t";
      }
      cout << endl;
   }
   cout << endl;

   int min = 0, max = 0;
   for (int r = 0; r < 3; r++)
   {
      for (int c = 0; c < 3; c++)
      {
         if (min > list[r][c])
         {
            min = list[r][c];
         }
         if (max < list[r][c])
         {
            max = list[r][c];
         }
      }
   }
   cout << "Maximun number in 2D array is " << max << ".\n";
   cout << "Minimum number in 2D array is " << min << ".";
}
