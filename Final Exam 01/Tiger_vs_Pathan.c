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
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, t_count = 0, p_count = 0;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        for (int i = 0; i <= n; i++)
        {
            //scanf(" %c", &s[i]);

            if (s[i] == 'T')
            {
                t_count++;
            }
            else if (s[i] == 'P')
            {
                p_count++;
            }
        }
        
        if (p_count > t_count)
        {
            printf("Pathaan\n");
        }
        else if (t_count > p_count)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}