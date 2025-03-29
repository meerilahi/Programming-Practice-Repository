#include <iostream>
using namespace std;
main()
{
    // To Count number of alphabets, digits and special characters in a string
    string str;
    int upper_case_alps = 0, lower_case_alps = 0, digits = 0, special_characters = 0;
    cout << "Enter a string to count alphabets, digits and special characters: ";
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90 )
        {
            upper_case_alps++;
        }
        else if (str[i] >= 97 && str[i] <= 122 )
        {
            lower_case_alps++;
        }
        else if (str[i] >= 48 && str[i] <= 57 )
        {
            digits++;
        }
        else
        {
            special_characters++;
        }
    }
    cout << "Upper case letters: " << upper_case_alps << endl;
    cout << "Lower case letters: " << lower_case_alps << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << special_characters << endl;

}