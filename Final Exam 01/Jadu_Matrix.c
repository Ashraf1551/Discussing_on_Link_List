#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

typedef long long int ll;
#define mod 1000000007

int main()
{
    int rows, columns;
    scanf("%d %d", &rows, &columns);

    if (rows != columns)
    {
        printf("NO\n");
        return 0;
    }

    int matrix[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if ((i == j || i + j == rows - 1) && matrix[i][j] != 1)
            {
                printf("NO\n");
                return 0;
            }
            else if (i != j && i + j != rows - 1 && matrix[i][j] != 0)
            {
                printf("NO\n");
                return 0;
            }
        }
    }

    printf("YES\n");

    return 0;
}
