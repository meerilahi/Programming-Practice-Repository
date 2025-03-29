#include <iostream>
using namespace std;

main()
{
    // Put even and odd elements of array in separate arrays
    int nums[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> nums[i];
    }

    int even = 0, odd = 0;

    for (int i = 0; i < 10; i++)
    {
        if (nums[i] % 2 == 0)
        {
            even++;
        }
        if(nums[i] % 2 != 0)
        {
            odd++;
        }
    }

    int numsE[even], numsO[odd];
    int j = 0, k = 0, i = 0;

    while (i < 10)
    {
        if (nums[i] % 2 == 0)
        {
            numsE[j] = nums[i];
            j++;
        }
        if (nums[i] % 2 != 0)
        {
            numsO[k] = nums[i];
            k++;
        }
        i++;
    }
    cout << "Even numbers are: ";
    for (int i = 0; i < even; i++)
    {
        cout << numsE[i] << " ";
    }
    cout << endl;
    cout << "Odd numbers are: ";
    for (int i = 0; i < odd; i++)
    {
        cout << numsO[i] << " ";
    }
}
