#include <iostream>
using namespace std;

// Checking Armstrong Number
bool check_armstrong(long long int num)
{
    // First find number of digits of num
    int numT = num, digits = 0;
    while (numT > 0)
    {
        numT /= 10;
        digits++;
    }

    int sum = 0;
    numT = num;
    for (int i = 1; i <= digits; i++)
    {   
        int product = 1;
        for (int j = 1; j <= digits; j++)
        {
            product *= numT % 10;
        }
        numT /= 10;
        sum += product;
    }
    if (sum == num)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

main()
{   int num;
    cout << "Enter number for armstrong check : ";
    cin >> num;
    if (check_armstrong(num) == true)
    {
        cout << "It is an Armstrong number.";
    }
    else
    {
        cout << "It is NOT Armstrong number.";
    }
    

}