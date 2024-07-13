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
        ll m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        ll ashRuff_007 = a * b * c;

        if (ashRuff_007 == 0 || m % ashRuff_007 != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", m / ashRuff_007);
        }
    }

    return 0;
}