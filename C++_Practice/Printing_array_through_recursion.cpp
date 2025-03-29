#include <iostream>
using namespace std;

void print(int array[], int size)
{
    static int i = 0;
    if (i < size)
    {
        cout << array[i] << " ";
        i++;
        print(array, size);
    }
}
main()
{
    cout << "Enter size of array: ";
    int size;
    cin >> size;
    cout << "Enter elments of array: ";
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    print(array, size);
}