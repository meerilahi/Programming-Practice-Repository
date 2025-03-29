#include <iostream>
using namespace std;
main()
{
    // Checking weather a triangle can be form from given values of angles
    int A, B, C;
    cout << "Enter three angles: ";
    cin >> A >> B >> C;
    if (A+B+C == 180 && A !=0 && B != 0 && C != 0)
    {
        cout << "Yes a triangle can be formed from given values of angles.";
    }
    else
    {
        cout << "No triangle can not be formed by given values of angles.";
    }
    
}