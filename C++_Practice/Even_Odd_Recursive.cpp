#include <iostream>
using namespace std;

Even_Odd(int Snum, int Lnum)
{
    if (Snum % 2 == 0)
    {
        cout << "Even: " << Snum << endl;
    }
    else
    {
        cout << "Odd: " << Snum << endl;
    }

    if (Snum == Lnum)
    {
        return 1;
    }
    else
    {
        return Even_Odd(Snum + 1, Lnum);
    }
}
main()
{
    int Snum, Lnum, result = 0;
    cout << "Enter a small number: ";
    cin >> Snum;
    cout << "Enter a Large number: ";
    cin >> Lnum;
    Even_Odd(Snum, Lnum);
}