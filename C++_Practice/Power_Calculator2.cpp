#include <iostream>
using namespace std;


int power_calc(int base, int power)
{
  if (power == 0 )
  {
    return 1;
  }
  else
  {
    return base * power_calc(base, power - 1); 
  }
  
}
main()
{
    int base, power;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter power: ";
    cin >> power;
    int result = power_calc(base, power);
    cout << result;
}