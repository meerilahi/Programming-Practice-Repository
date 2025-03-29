#include <iostream>
using namespace std;
main()
{
    // Finding an enter number is prime or not
    int num;
    cout << "Please enter a number: ";
    cin >> num;
    if (num % 2 != 0 && num % 3 != 0 && num % 5 != 0 && num % 7 != 0 && num % 9 != 0 || num == 2 || num == 3 || num == 5 || num == 7 || num == 9)
    {
        cout << num << " is a prime number.";
    }
    else
    {
        cout << num << " is a composite number.";
    }
}