#include <iostream>
using namespace std;

main()
{
    // Finding LCM of two numbers
    int numS, numL, LCM;
    cout << "Please enter two numbers to find LCM: ";
    cin >> numS >> numL;
    if (numL < numS)
    {
        int temp = numS;
        numS = numL;
        numL = temp;
    }

    for (int i = 1; i <= numL; i++)
    {
        LCM = numL * i;
        if (LCM % numS == 0)
        {
            break;
        }
    }
    cout << "LCM of " << numS << " and " << numL << " is: " << LCM;
}
