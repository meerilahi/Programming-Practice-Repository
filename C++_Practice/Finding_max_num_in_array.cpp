#include <iostream>
using namespace std;

main()
{
    int list[10];
    cout << "Enter 10 digits: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> list[i];
    }
    int max = list[0], min = list[0];
    for (int i = 0; i < 10; i++)
    {
        if (list[i] > max)
        {
            max = list[i];
        }
        if (list[i] < min)
        {
            min = list[i];
        }
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}
