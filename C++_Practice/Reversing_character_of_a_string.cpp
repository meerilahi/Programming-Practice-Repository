#include <iostream>
using namespace std;
main()
{
    // To Reverse characters of a string
    string strA, strB;
    int length = 0;
    cout << "Enter a string to reverse its charactes: ";
    cin >> strA;
    for (int i = 0; strA[i] != '\0'; i++)
    {
        length++;
    }

    int j = length-1;
    strB = strA;
    for (int i = 0; i < length; i++)
    {
        strB[i] = strA[j];
        j--;
    }
    cout << strB;
    

    
}