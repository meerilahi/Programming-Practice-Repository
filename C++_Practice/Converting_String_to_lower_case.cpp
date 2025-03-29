#include <iostream>
using namespace std;
main()
{
    // Converting string to lower case
    string str;
    int i = 0;
    cout << "Enter a string (only engish alphabets) to convert to lower case letters: ";
    cin >> str;
    while (str[i] != '\0')
    {
        if (str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    cout << str;
}