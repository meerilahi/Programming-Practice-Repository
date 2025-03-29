#include <iostream>
using namespace std;

main()
{
  // Power calculator
  long long int base, power, result = 1;
  cout << "Enter Base: ";
  cin >> base;
  cout << "Enter Power: ";
  cin >> power;

  for (int i = 1; i <= power; i++)
  {
    result = result * base;
  }
  cout << "Answer is; " << result;
}