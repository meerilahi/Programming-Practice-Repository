#include <iostream>
using namespace std;

main()
{   
    // Inerting an element in an array by duplicating it with lenght of one more than the older array
    char alps[10];
    cout << "Enter 10 alphabets: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> alps[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << alps[i] << " ";
    }
    cout << endl;
    char ch;
    cout << "Enter an alphabet to inset in the array: ";
    cin >> ch;
    int index;
    cout << "Enter index position at which you want to insert the new alphabet: ";
    cin >> index;

    char newalps[11];
    int j = 0, i = 0;
    while (i < 10)
    {
        if (j == index)
        {
            newalps[j] = ch;
            j++;
        }
        newalps[j] = alps[i];
        j++;
        i++;
    }
    cout << "Array is updated\n";
    for (int i = 0; i < 11; i++)
    {
        cout << newalps[i] << " ";
    }
}
