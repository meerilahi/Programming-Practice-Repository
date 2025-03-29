#include <iostream>
using namespace std;
main()
{   
    // Converting days to years weeks and days
    int days, years, weeks;
    cout << "Enter Total Days: ";
    cin >> days;

    years = days / 365;
    days = days % 365;
    weeks = days / 7;
    days = days % 7;
    
    cout << "Years: " << years << endl;
    cout << "weeks: " << weeks << endl;
    cout << "Days: " << days; 

}