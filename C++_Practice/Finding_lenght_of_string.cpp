#include <iostream>
using namespace std;
main()
{   
    // Finding length of a string
    string str;
    int length = 0;
    cout << "Enter a string to find its length: ";
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    cout << "Length of " << str << " is: " << length;
}