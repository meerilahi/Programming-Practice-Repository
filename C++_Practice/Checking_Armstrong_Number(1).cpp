#include <iostream>
using namespace std;
main()
{
  // Cheaking weather a number is Armstrong or not
  // Taking input number from user in num
  int num, numT;
  cout << "Enter a number: ";
  cin >> num;

  // Finding number of digits in number num
  numT = num;
  int dc = 0;
  while (numT != 0)
  {
    numT = numT / 10;
    dc++;
  }

  // storing digits of num in array digit[dc]
  numT = num;
  int digit[dc];
  for (int i = dc - 1; i >= 0; i--)
  {
    digit[i] = numT % 10;
    numT /= 10;
  }

  // Checking Armstrong
  int sum = 0;
  for (int i = 0; i < dc; i++)
  {
    int product = 1;
    for (int j = 0; j < dc; j++)
    {
      product *= digit[i];
    }

    sum += product;
  }
  if (sum == num)
  {
    cout << num << " is an Armstrong number." << endl;
  }
  else
  {
    cout << num << " is not an Armstrong number" << endl;
  }
}