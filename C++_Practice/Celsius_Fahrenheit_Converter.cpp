#include <iostream>
using namespace std;
main()
{   
    // Celcius Farenheit Converter using switch statmeent
    float temp, result;
    char unit_symbol;
    cout << "Enter temperature and unit that you want to convert to other unit respectively.\nC for Celcius and F for Farenheit.\n";
    cin >> temp >> unit_symbol;

    switch (unit_symbol)
    {
    case 'C':
        cout << temp << " " << unit_symbol << " = " << (temp*9/5)+32  << " F";
        break;

    case 'F':
        cout << temp << " " << unit_symbol << " = " << (temp-32)*5/9  << " C";
        break;
    
    default:
    cout << "You have entered wrong unit symbol";
        break;
    }
    

    
    

}