#include <iostream>
using namespace std;

// Function for finding binary code for base 10 number
long long int to_binary(long long int num)
{
    long long int code = 0, i = 1;
    while (num > 0)
    {
        code += num % 2 * i;
        num /= 2;
        i *= 10;
    }
    return code;
}
main()
{
    // Finding binary code for any integer
    long long int num;
    cout << "Enter any number to find its binary code: ";
    cin >> num;

    long long int code = to_binary(num);
    cout << code;

}