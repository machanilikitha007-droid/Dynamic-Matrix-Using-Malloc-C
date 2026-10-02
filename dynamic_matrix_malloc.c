#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matrix;
    int rows, cols;
    int i, j;

    printf("===== Dynamic Matrix Using malloc() =====\n");

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0)
    {
        printf("Invalid matrix size!\n");
        return 1;
    }

    matrix = (int **)malloc(rows * sizeof(int *));

    if (matrix == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));

        if (matrix[i] == NULL)
        {
            printf("Memory allocation failed!\n");

            for (j = 0; j < i; j++)
            {
                free(matrix[j]);
            }

            free(matrix);
            return 1;
        }
    }

    printf("\nEnter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n===== Dynamic Matrix =====\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }

    free(matrix);

    printf("\nMemory released successfully.\n");

    return 0;
}
