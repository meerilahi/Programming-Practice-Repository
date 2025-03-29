#include <iostream>
using namespace std;

main()
{
    // Delete dublicate elements from an array
    int nums[10];
    cout << "Enter 10 numbers to delete dublicate numbers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> nums[i];
    }
    int sz = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (nums[i] == nums[j] && i != j)
            {
                nums[j] = 0;
            }
        }
        if (nums[i] != 0)
        {
            sz++;
        }
    }
    int upnums[sz];
    int j = 0, k = 0;
    while (k < 10)
    {
        if (nums[k] != 0)
        {
            upnums[j] = nums[k];
            cout << upnums[j] << " ";
            j++;
        }
        k++;
    }
}
