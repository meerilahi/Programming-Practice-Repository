#include <iostream>
using namespace std;

main()
{
    // Count numbers of each element in an array
    int nums[10];
    cout << "Enter 10 numbers to find number of repititions: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> nums[i];
    }

    int counts[10] = {1,1,1,1,1,1,1,1,1,1};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (nums[i] == nums[j] && i != j)
            {
                counts[i]++;
            }
        }
    }
    cout << "Index\tValue\tRepetitions" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i << "\t" << nums[i] << "\t" << counts[i] << endl;
    }
}
