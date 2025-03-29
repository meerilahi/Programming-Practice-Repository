#include <iostream>
using namespace std;

int sum(int Snum, int Lnum)
{
    if (Snum == Lnum)
    {
        return Lnum;
    }
    else
    {
        return Snum + sum(Snum + 1, Lnum);
    }
}
main()
{
    int Snum, Lnum, result = 0;
    cout << "Enter a small number: ";
    cin >> Snum;
    cout << "Enter a Large number: ";
    cin >> Lnum;
    result = sum(Snum, Lnum);
    cout << result;
}