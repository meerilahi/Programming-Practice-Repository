#include <iostream>
using namespace std;
main()
{
  // Storing digits of a number in an array
  // Taking input number from user in variable num
  int num;
  cout << "Enter a  number: ";
  cin >> num;

  // Assigning value of num to numA to reserve number in num. As numA will decrease in below loop to find number of digits of the num
  int numA = num;
  int dc = 0;
  while (numA >= 9)
  {
    numA = numA / 10;
    dc++;
  }
  dc += 1;

  // Making lowest possible number from dc digits of num using numB
  int numB = 1;
  for (int i = 1; i < dc; i++)
  {
    numB *= 10;
  }

  // storing individual digits in array digits[dc] by dividing num of numB
  int digits[dc];
  for (int i = 0; i < dc; i++)
  {
    digits[i] = num / numB;
    num = num % numB;
    numB = numB / 10;
  }
  for (int i = 0; i < dc; i++)
  {
    cout << digits[i];
  }
  cout << endl;

  // Product of digits of num stored individually in array digits[dc]
  int digit_product = 1;
  for (int i = 0; i < dc; i++)
  {
    digit_product *= digits[i];
  }
  cout << "Product of all the digits is: " << digit_product << endl;

  // Reversing digits of the number in num or elements of array
  for (int i = dc - 1; i >= 0; i--)
  {
    cout << digits[i];
  }
}