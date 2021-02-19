#include <stdio.h>
int main()
{
    int first[100][100], second[100][100], mul[100][100], row, col, m1, n1, m2, n2, k, sum = 0;
    printf("Enter first matrix row and column= ");
    scanf("%d %d", &m1, &n1);
    printf("Enter second matrix row and column= ");
    scanf("%d %d", &m2, &n2);
    printf("\n");

    while (n1 != m2)
    {
        printf("Error !! First matrix column is not equal second matrix row\n");

        printf("Enter first matrix row and column= ");
        scanf("%d", &m1, &n1);
        printf("Enter second matrix row and column= ");
        scanf("%d", &m2, &n2);
    }

    for (row = 0; row < m1; row++)
    {
        for (col = 0; col < n1; col++)
        {
            printf("first[%d] [%d]= ", row, col);
            scanf("%d", &first[row][col]);
        }
        printf("\n");
    }

    for (row = 0; row < m2; row++)
    {
        for (col = 0; col < n2; col++)
        {
            printf("second[%d] [%d]= ", row, col);
            scanf("%d", &second[row][col]);
        }
        printf("\n");
    }

    for (row = 0; row < m1; row++)
    {
        for (col = 0; col < n2; col++)
        {
            for (k = 0; k < n1; k++)
            {
                sum = sum + first[row][k] * second[k][col];
            }
            mul[row][col] = sum;
            sum = 0;
        }
    }

    printf("First= ");
    for (row = 0; row < m1; row++)
    {
        printf("\t");
        for (col = 0; col < n1; col++)
        {
            printf("%d ", first[row][col]);
        }
        printf("\n");
    }

    printf("\nSecond= ");
    for (row = 0; row < m2; row++)
    {
        for (col = 0; col < n2; col++)
        {
            printf("%d ", second[row][col]);
        }
        printf("\n");
        printf("\t");
    }

    printf("\nMultiplication=\n ");
    for (row = 0; row < m1; row++)
    {
        printf("\t");
        for (col = 0; col < n2; col++)
        {
            printf("%d ", mul[row][col]);
        }
        printf("\n");
    }

    return 0;
}
