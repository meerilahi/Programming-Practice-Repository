#include <iostream>
using namespace std;
main()
{

   char list[26];
   char ch = 'a';
   for (int i = 0; i < 26; i++)
   {
      list[i] = ch;
      ch++;
   }

   cout << "Enter a character to find: ";
   char x;
   cin >> x;

   int si = 0;
   int ei = 25;
   int mi = 0;
   int xi = -1;

   while (si <= ei)
   {
      mi = (si + ei) / 2;

      if (list[mi] == x)
      {
         xi = mi;
         cout << "Character " << x << " is found in the list on the index " << xi << endl;
         break;
      }
      else if (x < list[mi])
      {
         ei = mi - 1;
      }
      else
      {
         si = mi + 1;
      }
   }

   if (xi == -1)
   {
      cout << "Character " << x << " is not found in the list." << endl;
   }
}
