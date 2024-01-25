#include<iostream>
using namespace std;

// Function to input elements into a matrix of size m x n...

void inputMatrix(int A[10][10], int m, int n)
{
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j) 
        {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> A[i][j];
        }
    }
}

// Function to display elements of a matrix of size m x n...

void displayMatrix(int A[10][10], int m, int n) {
    cout << "Matrix elements are:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to calculate the sum of all elements of a matrix of size m x n
int sumMatrix(int A[10][10], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += A[i][j];
        }
    }
    return sum;
}

// Function to display row-wise sum of a matrix of size m x n..

void rowSum(int A[10][10], int m, int n)
{
    cout << "Row-wise sum of the matrix:" << endl;
    for (int i = 0; i < m; ++i) 
    {
        int rowSum = 0;
        for (int j = 0; j < n; ++j)
        {
            rowSum += A[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << rowSum << endl;
    }
}

// Function to display column-wise sum of a matrix of size m x n...

void colSum(int A[10][10], int m, int n) 
{
    cout << "Column-wise sum of the matrix:" << endl;
    for (int j = 0; j < n; ++j) 
    {
        int colSum = 0;
        for (int i = 0; i < m; ++i) 
        {
            colSum += A[i][j];
        }
        cout << "Sum of column " << j + 1 << ": " << colSum << endl;
    }
}

// Function to create transpose of a matrix of size m x n...

void transposeMatrix(int A[10][10], int m, int n) 
{
    int transposedMatrix[10][10];
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) 
        {
            transposedMatrix[i][j] = A[j][i];
            cout << transposedMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int A[10][10];
    int r, c;

    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Input elements into matrix\n";
        cout << "2. Display elements of matrix\n";
        cout << "3. Sum of all elements of matrix\n";
        cout << "4. Display row-wise sum of matrix\n";
        cout << "5. Display column-wise sum of matrix\n";
        cout << "6. Create transpose of matrix\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            inputMatrix(A, r, c);
            break;
        case 2:
            displayMatrix(A, r, c);
            break;
        case 3:
            cout << "Sum of all elements: " << sumMatrix(A, r, c) << endl;
            break;
        case 4:
            rowSum(A, r, c);
            break;
        case 5:
            colSum(A, r, c);
            break;
        case 6:
            transposeMatrix(A, r, c);
            break;
        case 7:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice! Please enter a valid option.\n";
        }
    } while (choice != 7);

    return 0;
}
