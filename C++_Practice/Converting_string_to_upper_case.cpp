#include <iostream>
using namespace std;
main()
{
    // Converting string to upper case
    string str;
    int i = 0;
    cout << "Enter a string (only engish alphabets) to convert to upper case letters: ";
    cin >> str;
    while (str[i] != '\0')
    {
        if (str[i] >= 90)
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    cout << str;
}