#include <stdio.h>
#include <math.h>

int get_first_digit(int number)
{
    int first = number;

    while (first >= 10)
    {
        first = first / 10;
    }

    return first;
}

int main()
{
    int T, first, last, n, sum, i;
    scanf("%d", &T);

    for (i = 1; i <= T; i++)
    {
        scanf("%d", &n);
        first = get_first_digit(n);
        last = n % 10;
        sum = first + last;

        printf("Sum = %d\n", sum);
    }
}