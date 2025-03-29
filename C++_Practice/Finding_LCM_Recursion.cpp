#include <iostream>
#include <math.h>
using namespace std;

int LCM(int Snum, int Lnum)
{   
    static int lcm = 0;
    lcm += Snum;

    if (lcm % Snum == 0 && lcm % Lnum == 0)
    {   
        return lcm;
    }
    else
    {
        return LCM(Snum, Lnum);
    }
}
main()
{
    int lcm, Snum, Lnum;
    cout << "Enter a small number: ";
    cin >> Snum;
    cout << "Enter a large number: ";
    cin >> Lnum;

    lcm = LCM(Snum, Lnum);
    cout << "LCM is: " << lcm;

}