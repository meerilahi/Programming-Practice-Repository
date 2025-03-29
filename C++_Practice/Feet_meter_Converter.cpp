#include <iostream>
using namespace std;
main()
{   
    // Feet Meter Converter using switch statmeent
    float length, result;
    char unit_symbol;
    cout << "Enter length and unit that you want to convert to other unit respectively.\nf for feet and m for meters.\n";
    cin >> length >> unit_symbol;

    switch (unit_symbol)
    {
    case 'f':
        cout << length << " " << unit_symbol << " = " << length / 3.281 << " m";
        break;

    case 'm':
        cout << length << " " << unit_symbol << " = " << length * 3.281 << " f";
        break;
    
    default:
    cout << "You have entered wrong unit symbol";
        break;
    }
    

    
    

}