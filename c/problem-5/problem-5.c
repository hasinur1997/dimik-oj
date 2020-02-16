#include <stdio.h>

int main()
{
    int T, n, i, j, k;
    scanf("%d", &T);

    for (i = 1; i <= T; i++)
    {
        scanf("%d", &n);

        for (j = 1; j <= n; j++)
        {
            for (k = 1; k <= n; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}