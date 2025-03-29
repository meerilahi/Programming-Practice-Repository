#include <iostream>
using namespace std;
main()
{
    // Find largest integer among three integers
    int n1, n2, n3, nl;
    cout << "Enter three integers: ";
    cin >> n1 >> n2 >> n3;
    if (n1 == n2 && n1 == n3)
    {
        cout << "All numbers are equal";
    }
    
    else if (n1 >= n2 &&  n1 >= n3)
    {
        cout << n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        cout << n2;
    }
    else if (n3 > n1 && n3 >= n2)
    {
        cout << n3;
    }
    else
    {
        cout << "Wrong Programme";
    }
    
}