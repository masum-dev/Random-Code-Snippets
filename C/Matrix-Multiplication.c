// Matrix Multiplication
#include <stdio.h>

void matrixMult(int row1, int col1, int row2, int col2, int matrix1[row1][col1], int matrix2[row2][col2])
{
    // Matrix to store multiplication result
    int multResult[row1][col2];

    // Performing Multiplication
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            // Initialize the result cell to zero
            multResult[i][j] = 0;

            for (int k = 0; k < col1; k++)
            {
                multResult[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    // Printing the result matrix
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", multResult[i][j]);
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

    // Checking if Matrix-1 Column == Matrix-2 Row
    if (col1 != row2)
    {
        printf("Matrix-1's Column needs to same as Matrix-2's Row\n");
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

    // Passing the matrix to 'matrix-1' & 'matrix-2' to matrixMul function
    matrixMult(row1, col1, row2, col2, matrix1, matrix2);

    return 0;
}