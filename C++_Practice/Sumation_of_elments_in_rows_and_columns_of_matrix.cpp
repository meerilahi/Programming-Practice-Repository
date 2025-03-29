#include <iostream>
using namespace std;

main()
{
    // sum of given rows and columns of a matrix
    int matrix[4][3], Rsum[4] = {0, 0, 0, 0}, Csum[3] = {0, 0, 0};

    cout << "Enter matrix\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Rsum[i] += matrix[i][j];
            Csum[j] += matrix[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "Sum of Row " << i + 1 << " " << Rsum[i] << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Sum of Column " << i + 1 << " " << Csum[i] << endl;
    }
}
