#include <iostream>
#include <string>
using namespace std;
long long factorial(long num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
factorial_print(long long int Snum, long long int Lnum)
{
    for (long long int i = Snum; i <= Lnum; i++)
    {
        long long int sum = 0, numT = i;
        while (numT > 0)
        {
            sum += factorial(numT % 10);
            numT /= 10;
        }
        if (sum == i)
        {
            cout << i << "\t";
        }
    }
}

main()
{
    long long int Snum, Lnum;
    cout << "Enter a Small number: ";
    cin >> Snum;
    cout << "Enter a Large number: ";
    cin >> Lnum;
    factorial_print(Snum, Lnum);
}
