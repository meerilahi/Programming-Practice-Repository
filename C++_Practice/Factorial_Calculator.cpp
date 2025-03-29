#include <iostream>
using namespace std;
main()
{
  // Factorial calculator
  int num, factorial = 1;
  cout << "Enter any number to find factorial: ";
  cin >> num;
  while (num >= 1)
  {
    factorial *= num;
    num--;
  }
   cout << "Factorial is: " << factorial;
}