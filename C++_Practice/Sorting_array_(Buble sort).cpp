#include <iostream>
using namespace std;
main()
{

   int int_list[8] = {4, 2, 6, 8, 5, 7, 3, 1};
   int true_conditions = 0;
   while (true_conditions < 7)
   {
      true_conditions = 0;
      int i = 0;

      while (i < 7)
      {
         if (int_list[i] > int_list[i + 1])
         {
            int temp = int_list[i];
            int_list[i] = int_list[i + 1];
            int_list[i + 1] = temp;
         }
         i++;
      }

      for (int i = 0; i < 7; i++)
      {
         if (int_list[i] < int_list[i + 1])
         {
            true_conditions += 1;
         }
      }
   }

   for (int i = 0; i <= 7; i++)
   {
      cout << int_list[i] << "\t";
   }
}




// char list[40];
// char ch = 'a';
// for (int i = 0; i <= 39; i++)
// {
//    list[i] = ch;
//    ch++;
// }

// cout << "Enter a character to find: ";
// char x;
// cin >> x;
// int si = 0;
// int ei = 39;
// int mi = 0;
// int xi = -1;

// while (si <= ei)
// {
//    mi = (si + ei) / 2;

//    if (list[mi] == x)
//    {
//       xi = mi;
//       cout << "Character " << x << " is found in the list on the index " << xi << endl;
//       break;
//    }
//    else if (x < list[mi])
//    {
//       ei = mi - 1;
//       cout << "x smaller \n";
//    }
//    else
//    {
//       si = mi + 1;
//       cout << "x greater \n";
//    }

//    cout << "Character " << x << " is not found in the list on index " << mi << endl;
// }

// if (xi = -1)
// {
//    cout << "Character " << x << " is not found in the list." << endl;
// }
// else
// {
//    cout << "Character " << x << " is not found in the list on index " << xi << endl;
// }

// int spin[4];
// cout << "Set your PIN" << endl;
// for (int si = 0; si < 4; si++)
// {
//    cin >> spin[si];
// }

// int cpin[4];
// cout << "Enter PIN again to confirm." << endl;
// for (int ci = 0; ci < 4; ci++)
// {
//    cin >> cpin[ci];
// }

// int verify[4];

// for (int vi = 0; vi < 4; vi++)
// {
//       if (cpin[vi] == spin[vi])
//       {
//          verify[vi] = 1;
//       }

//    }
// if (verify[0]==1 && verify[1]==1 && verify[2]==1 && verify[3]==1)
// {
//    cout << "PIN  is set.";
// }
// else
// {
//    cout << "PIN confirmation failed.";
// }

// int loc = -1;
// cout << "Enter the character to find in the list: ";
// char x;
// cin >> x;
// char list[5] = {'2', 'g', '$', ';', '!'};
// for (int i = 0; i < 5; i++)
// {
//    if (x == list[i])
//    {
//       loc = i;
//    }
// }
//    if (loc == -1)
//    {
//       cout << "Character " << x << " is not found in the list.";
//    }
//    else
//    {
//       cout << "Yes " << x << " is present in list at index " << loc;
//    }
