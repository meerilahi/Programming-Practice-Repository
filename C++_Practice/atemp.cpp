#include <iostream>
using namespace std;
main()
{
   int alpha = 5;
   switch (alpha)
   {
   case 1:
      alpha*=alpha;
      break;
   case 5:
      alpha *= 2;
   case 6:
      alpha+=5;
      break;
   default:
      break;
   }
   cout << alpha;
}
