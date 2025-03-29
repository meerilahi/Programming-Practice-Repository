#include <iostream>
using namespace std;


main()
{
    // Interchange diagonal of a square matrix
    int matrix[4][4];

    cout << "Enter matrix\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][3 - i];
        matrix[i][3 - i] = temp;
    }
    cout << "Matrix with interchanged diagonal is: \n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}
