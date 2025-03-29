#include <iostream>
using namespace std;

main()
{
    // Printing all unique elements in an array
    char alps[10];
    cout << "Enter 10 alphabets: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> alps[i];
    }

    for (int i = 0; i < 10; i++)
    {
        int cnd = 0;
        for (int j = 0; j < 10; j++)
        {
            if (alps[i] != alps[j])
            {
                cnd++;
            }
        }
        if (cnd == 9)
        {
            cout << alps[i] << " ";
        }
    }
}
