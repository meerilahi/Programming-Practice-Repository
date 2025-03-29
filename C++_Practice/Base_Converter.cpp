#include <iostream>
#include <string>
using namespace std;

main()
{
    // Base conversion calculator
    long long int num;
    cout << "Enter any number : ";
    cin >> num;
    int base;
    cout << "Enter base to which you want to convert : ";
    cin >> base;

    // Finding length and highest switch of the code
    int hswitch = 1;
    int length;
    for (int i = 1; i <= num; i++)
    {
        if (hswitch * base > num)
        {
            length = i;
            break;
        }
        hswitch *= base;
    }

    // cout << length << endl;
    // cout << hswitch << endl;
    // cout << endl;

    int numT = num;
    int hswitchT = hswitch;

    int code[length];
    for (int i = 0; i < length; i++)
    {
        code[i] = 0;
    }

    for (int i = 0; i < length; i++)
    {
        while (hswitchT <= numT)
        {
            // cout << numT << " - " << hswitchT << " = ";
            numT = numT - hswitchT;
            // cout << numT  << endl;
            
            code[i]++;
        }
        // cout << i + 1 << " digit is: " << code[i] << endl;
        // cout << endl;
        hswitchT /= base;
    }

    cout << "Representation for " << num << " of base 10 into base " << base << " is: ";
    for (int i = 0; i < length; i++)
    {
        cout << code[i];
    }
    

}