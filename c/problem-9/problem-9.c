#include <stdio.h>
#include <math.h>

int main()
{
    int T, i, n, temp, result;

    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        scanf("%d", &n);

        result = sqrt(n);

        temp = result * result;

        if (temp == n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}