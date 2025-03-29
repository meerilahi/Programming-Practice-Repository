#include <iostream>
using namespace std;
main()
{

   int loc = -1;
   cout << "Enter the character to find in the list: ";
   char x;
   cin >> x;
   char list[5] = {'2', 'g', '$', ';', '!'};
   for (int i = 0; i < 5; i++)
   {
      if (x == list[i])
      {
         loc = i;
      }
   }
   if (loc == -1)
   {
      cout << "Character " << x << " is not found in the list.";
   }
   else
   {
      cout << "Yes " << x << " is present in list at index " << loc;
   }
}

