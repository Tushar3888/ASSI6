#include <stdio.h>

int main()
{
    int n, rem, binary = 0, place = 1;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    while (n > 0)
    {
        rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary = %d\n", binary);

    return 0;
}
