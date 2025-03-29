#include <iostream>
using namespace std;
main()
{
    // Fining Leap Year
    int year;
    cout << "Enter Year to find weather it is leap or not: ";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << year << " is a leap year.";
    }
    else
    {
        cout << year << " is not a leap year.";       
    }
    
}