#include <iostream>
using namespace std;
main()
{
    // Finding an number is palindrome or not
    int num, dc = 1;
    cout << "Please enter a number: ";
    cin >> num;

    // Finding number of digits in a number
    for (int i = num; i > 9; i /= 10)
    {
        dc++;
    }

    // Storing individual digits of a number in digit[dc];
    int digits[dc];
    int numT = num;
    for (int i = dc - 1; i >= 0; i--)
    {
        digits[i] = numT % 10;
        numT /= 10;
    }

    // checking weather it is same in reverse order or not;
    int F = 0;
    int R = dc - 1;
    int cnds = 0;
    while (F < R)
    {
        cout << digits[F] << " " << digits[R] << endl;
        if (digits[F] == digits[R])
        {
            cnds++;
        }
        F++;
        R--;
    }
    cout << cnds << endl;
    cout << dc / 2 << endl;
    if (cnds == dc / 2)
    {
        cout << num << " is a palindrome number.";
    }
    else
    {
        cout << num << " is not a palindrome number.";
    }
}