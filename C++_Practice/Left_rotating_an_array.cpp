#include <iostream>
using namespace std;

main()
{
    // Left Rotating elements of an array
    char alps[10];
    cout << "Enter 10 alphabets: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> alps[i];
    }
    int steps;
    cout << "Please enter number of steps towards left: ";
    cin >> steps;

    for (int k = 1; k <= steps; k++)
    {
        int temp;
        temp = alps[0];
        for (int i = 0; i < 9; i++)
        {
            alps[i] = alps[i + 1];
        }
        alps[9] = temp;
    }
    cout << "Alphabets with one step left rotate are: ";
    for (int i = 0; i < 10; i++)
    {
        cout << alps[i] << " ";
    }
}
