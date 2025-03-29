#include <iostream>
using namespace std;

main()
{
    // Finding Transpose of given matrix
    int matrix[4][3], matrixT[3][4];
    cout << "Enter matrix A\n";
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
            matrixT[j][i] = matrix[i][j];
        }
    }
    cout << "Transpose of given matrix is: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout <<  matrixT[i][j] << " ";
        }
        cout << endl;
    }
    
    
}
