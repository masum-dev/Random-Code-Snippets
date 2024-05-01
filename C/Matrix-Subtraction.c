// Matrix Subtraction
#include <stdio.h>

void matrixSub(int row, int col, int matrix1[row][col], int matrix2[row][col])
{
    // Matrix to store subtraction result
    int subResult[row][col];

    // Performing Subtraction
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            subResult[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    // Printing the result matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", subResult[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    int row1, col1, row2, col2;
    printf("Enter the size of the row and col of the matrix-1: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter the size of the row and col of the matrix-2: ");
    scanf("%d %d", &row2, &col2);

    // Checking if Both Matrix has same dimentions
    if (row1 != row2 || col1 != col2)
    {
        printf("Enter same dimention matrixes to perform Subtraction\n");
        return 0;
    }

    // Creating the matrix
    int matrix1[row1][col1];
    int matrix2[row2][col2];

    // Input of the matrix-1
    printf("Enter the elements of matrix-1: ");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input of the matrix-2
    printf("Enter the elements of matrix-2: ");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Passing the matrix to 'matrix-1' & 'matrix-2' to matrixSub function
    matrixSub(row1, col1, matrix1, matrix2);

    return 0;
}