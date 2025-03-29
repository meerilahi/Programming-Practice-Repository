#include <iostream>
#include <math.h>
using namespace std;

int HCF(int Snum, int Lnum)
{   
    static int hcf = Snum;
    hcf--;
    if (Snum % hcf == 0 &&  Lnum % hcf == 0)
    {   
        return hcf;
    }
    else
    {
        return HCF(Snum, Lnum);
    }
}
main()
{
    int Snum, Lnum, hcf;
    cout << "Enter a small number: ";
    cin >> Snum;
    cout << "Enter a large number: ";
    cin >> Lnum;
    hcf = HCF(Snum,Lnum);
    cout << "HCF is: " << hcf;

}