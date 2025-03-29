#include <iostream>
using namespace std;
main()
{
  // Finding armstrong number till n

  // Taking n from user
  long long n;
  cout << "Enter a number till which armstrong number will be find: ";
  cin >> n;

  cout << "Following are armstrong numbers till " << n << endl;

  for (long long num = 0; num < n; num++)
  {

    // Finding number of digits in number num
    long long numT = num;
    long long dc = 0;
    while (numT != 0)
    {
      numT = numT / 10;
      dc++;
    }

    // storing digits of num in array digit[dc]
    numT = num;
    long long digit[dc];
    for (long long i = dc - 1; i >= 0; i--)
    {
      digit[i] = numT % 10;
      numT /= 10;
    }

    // Checking Armstrong
    long long sum = 0;
    for (long long i = 0; i < dc; i++)
    {
      long long product = 1;
      for (long long j = 0; j < dc; j++)
      {
        product *= digit[i];
      }

      sum += product;
    }
    if (sum == num)
    {
      cout << num << " \t";
    }
  }
}