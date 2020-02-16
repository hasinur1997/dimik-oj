#include <stdio.h>

int main()
{
    int counter = 0, i;

    for (i = 100; i >= 1; i--)
    {
        printf("%d\t", i);

        counter++;

        if (counter >= 5)
        {
            printf("\n");
            counter = 0;
        }
    }
}