#include <iostream>
using namespace std;

main()
{   
    // Finding HCF of two numbers
    int numA, numB, numS, HCF;
    cin >> numA >> numB;
    if (numA < numB)
    {
        numS = numA;
    }
    else
    {
        numS = numB;
    }

    for (int i = 1; i <= numA; i++)
    {
        if (numA % i == numB % i)
        {
            HCF = i;
        }
        
    }
    cout << "HCF of " << numA << " and " << numB << " is: " << HCF;
}
    
