#include <iostream>
using namespace std;
main()
{
   char spin[8];
   char vpin[8];
   int br = 0;

   cout << "Set your PIN.\n";
   for (int h = 0; h < 8; h++)
   {
      cin >> spin[h];
   }

   for (int i = 65; i <= 122; i++)
   {
      for (int j = 65; j <= 122; j++)
      {

         for (int k = 65; k <= 122; k++)
         {

            for (int l = 65; l <= 122; l++)
            {

               for (int m = 65; m <= 122; m++)
               {

                  for (int n = 65; n <= 122; n++)
                  {

                     for (int o = 65; o <= 122; o++)
                     {

                        for (int p = 65; p <= 122; p++)
                        {
                           cout << char(i) << char(j) << char(k) << char(l) << char(m) << char(n) << char(o) << char(p) << endl;
                           if (spin[0] == char(i) && spin[1] == char(j) && spin[2] == char(k) && spin[3] == char(l) && spin[4] == char(m) && spin[5] == char(n) && spin[6] == char(o) && spin[7] == char(p))
                           {

                              vpin[0] = char(i);
                              vpin[1] = char(j);
                              vpin[2] = char(k);
                              vpin[3] = char(l);
                              vpin[4] = char(m);
                              vpin[5] = char(n);
                              vpin[6] = char(o);
                              vpin[7] = char(p);
                              br = 1;
                           }
                           if (br == 1)
                           {
                              break;
                           }
                        }
                        if (br == 1)
                        {
                           break;
                        }
                     }
                     if (br == 1)
                     {
                        break;
                     }
                  }
                  if (br == 1)
                  {
                     break;
                  }
               }
               if (br == 1)
               {
                  break;
               }
            }
            if (br == 1)
            {
               break;
            }
         }
         if (br == 1)
         {
            break;
         }
      }
      if (br == 1)
      {
         break;
      }
   }
   if (br == 1)
   {
      cout << "PIN Cracked Successfully \n";
      for (int r = 0; r < 8; r++)
      {
         cout << vpin[r] << " ";
      }
   }
      else
      {
         cout << "PIN cracking unsuccessfull.";
      }
}
