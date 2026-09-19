#include <stdio.h>

int main()
{
    int choice, n, temp, rem, rev, sum, count, i, flag;

    do
    {
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count the number of Digits of an integer\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &n);

                temp = n;
                rev = 0;

                while (temp != 0)
                {
                    rem = temp % 10;
                    rev = rev * 10 + rem;
                    temp = temp / 10;
                }

                if (rev == n)
                    printf("%d is a Palindrome.\n", n);
                else
                    printf("%d is not a Palindrome.\n", n);
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &n);

                temp = n;
                sum = 0;

                while (temp != 0)
                {
                    rem = temp % 10;
                    sum = sum + rem * rem * rem;
                    temp = temp / 10;
                }

                if (sum == n)
                    printf("%d is an Armstrong Number.\n", n);
                else
                    printf("%d is not an Armstrong Number.\n", n);
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &n);

                flag = 1;

                if (n <= 1)
                    flag = 0;
                else
                {
                    for (i = 2; i < n; i++)
                    {
                        if (n % i == 0)
                        {
                            flag = 0;
                            break;
                        }
                    }
                }

                if (flag == 1)
                    printf("%d is a Prime Number.\n", n);
                else
                    printf("%d is not a Prime Number.\n", n);
                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &n);

                temp = n;
                sum = 0;

                while (temp != 0)
                {
                    rem = temp % 10;
                    sum = sum + rem;
                    temp = temp / 10;
                }

                printf("Sum of digits = %d\n", sum);
                break;

            case 5:
                printf("Enter an integer: ");
                scanf("%d", &n);

                temp = n;
                count = 0;

                if (temp == 0)
                    count = 1;
                else
                {
                    while (temp != 0)
                    {
                        count++;
                        temp = temp / 10;
                    }
                }

                printf("Number of digits = %d\n", count);
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please enter a number from 1 to 6.\n");
        }

    } while (choice != 6);

    return 0;
}
