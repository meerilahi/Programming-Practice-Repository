#include <iostream>
using namespace std;

main()
{
    // Right Rotating elements of an array
    char alps[10];
    cout << "Enter 10 alphabets: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> alps[i];
    }
    int steps;
    cout << "Please enter number of steps towards right: ";
    cin >> steps;

    for (int k = 1; k <= steps; k++)
    {
        int temp;
        temp = alps[9];
        for (int i = 9; i > 0; i--)
        {
            alps[i] = alps[i - 1];
        }
        alps[0] = temp;
    }
    cout << "Alphabets with right rotate are: ";
    for (int i = 0; i < 10; i++)
    {
        cout << alps[i] << " ";
    }
}
