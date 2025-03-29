#include <iostream>
using namespace std;
main()
{
  // Reversing digits of a number
  int num;
  cout << "Enter a  number: ";
  cin >> num;

  int reverse = 0;

  for (; num > 0; num /= 10)
  {
    reverse = (reverse * 10) + (num % 10);
  }

  cout << reverse;
}