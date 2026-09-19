#include <stdio.h>

int main()
{
    int x, n, i, j;
    double sum = 0, power, fact, term;

    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);

    for (i = 1; i <= n; i++)
    {
        power = 1;
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            power = power * x;
        }

        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }

        term = power / fact;

        if (i % 2 == 0)
            sum = sum - term;
        else
            sum = sum + term;
    }

    printf("Sum of the series = %.4lf\n", sum);

    return 0;
}
