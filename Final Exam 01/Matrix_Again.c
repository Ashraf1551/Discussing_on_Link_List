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

    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Last row: ");
    for (int j = 0; j < M; j++)
    {
        printf("%d ", matrix[N - 1][j]);
    }
    printf("\n");

    printf("Last column: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", matrix[i][M - 1]);
    }
    printf("\n");

    return 0;
}