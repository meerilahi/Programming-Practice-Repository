#include <iostream>
using namespace std;
main()
{
   int spin[4], vpin[4], cnd = 0, counter = 0;

   cout << "Set your PIN.\n";
   for (int n = 0; n < 4; n++)
   {
      cin >> spin[n];
   }

   for (int i = 0; i <= 9; i++)
   {
      counter += 1;
      vpin[0] = i;
      for (int j = 0; j <= 9; j++)
      {
         counter += 1;
         vpin[1] = j;
         for (int k = 0; k <= 9; k++)
         {
            counter += 1;
            vpin[2] = k;
            for (int l = 0; l <= 9; l++)
            {
               counter += 1;
               vpin[3] = l;
               cout << i << j << k << l << "\n";

               if (spin[0] == vpin[0] && spin[1] == vpin[1] && spin[2] == vpin[2] && spin[3] == vpin[3])
               {
                  cnd = 1;
                  break;
               }
            }
            if (cnd == 1)
            {
               break;
            }
         }
         if (cnd == 1)
         {
            break;
         }
      }
      if (cnd == 1)
      {
         break;
      }
   }
   if (cnd == 1)
   {
   cout << "PIN cracked successfully. \n";
   for (int o = 0; o < 4; o++)
   {
      cout << vpin[o] << " ";
   }
      
   }
   else
   {
      cout << "PIN cracking unsuccessfull.";
   }
   cout << counter;
}
