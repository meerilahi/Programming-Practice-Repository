#include <iostream>
using namespace std;

main()
{
    // Multiplication of two matrices
    int matrixA[4][3], matrixB[4][3], matrixR[4][3];
    cout << "Enter matrix A\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrixA[i][j];
        }
    }
    cout << "Enter matrix B\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrixB[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrixR[i][j] = matrixA[i][j] * matrixB[i][j];
        }
    }
    cout << "Resultant Matrix is:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrixR[i][j] << " ";
        }
        cout << endl;
    }
}
