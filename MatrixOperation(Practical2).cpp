#include <iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    int A[r1][c1], B[r2][c2], C[10][10];

    cout << "\nEnter elements of Matrix A:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "\nEnter elements of Matrix B:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    int choice;
    cout << "\nChoose Operation:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose of A\n";
    cin >> choice;

    switch (choice)
    {

    case 1:
        if (r1 == r2 && c1 == c2)
        {
            cout << "\nResult (A + B):\n";
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    C[i][j] = A[i][j] + B[i][j];
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
            cout << "Addition not possible!";
        break;

    case 2:
        if (r1 == r2 && c1 == c2)
        {
            cout << "\nResult (A - B):\n";
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    C[i][j] = A[i][j] - B[i][j];
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
            cout << "Subtraction not possible!";
        break;

    case 3:
        if (c1 == r2)
        {
            cout << "\nResult (A x B):\n";
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                    C[i][j] = 0;
                    for (int k = 0; k < c1; k++)
                        C[i][j] += A[i][k] * B[k][j];
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
            cout << "Multiplication not possible!";
        break;

    case 4:
        cout << "\nTranspose of Matrix A:\n";
        for (int j = 0; j < c1; j++)
        {
            for (int i = 0; i < r1; i++)
                cout << A[i][j] << " ";
            cout << endl;
        }
        break;

    default:
        cout << "Invalid choice!";
    }

    return 0;
}
