#include <iostream>
using namespace std;

main()
{
    // Two merge two sorted array
    int numsA[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> numsA[i];
    }
    int numsB[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> numsB[i];
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (numsA[j] < numsA[i])
            {
                int temp = numsA[j];
                numsA[j] = numsA[i];
                numsA[i] = temp;
            }
            if (numsB[j] < numsB[i])
            {
                int temp = numsB[j];
                numsB[j] = numsB[i];
                numsB[i] = temp;
            }
        }
    }

    int numsM[20];
    int j = 0;
    for (int i = 0; i < 20; i += 2)
    {

        numsM[i] = numsA[j];
        numsM[i + 1] = numsB[j];
        j++;
    }
    for (int i = 0; i < 20; i++)
    {
        for (int j = i; j < 20; j++)
        {
            if (numsM[j] < numsM[i])
            {
                int temp = numsM[j];
                numsM[j] = numsM[i];
                numsM[i] = temp;
            }
        }
    }

    for (int i = 0; i < 20; i++)
    {
        cout << numsM[i] << " ";
    }
}
