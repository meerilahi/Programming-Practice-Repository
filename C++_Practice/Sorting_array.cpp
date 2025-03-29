#include <iostream>
using namespace std;

main()
{
    // Sorting an array in assending order
    int nums[10];
    cout << "Enter 10 numbers to sort: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (nums[j] < nums[i])
            {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << nums[i] << " ";
    }
}
