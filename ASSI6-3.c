#include <stdio.h>
int main()
{
    int n,r=0,rm,og;
    printf("Enter a number: ");
    scanf("%d",&n);
    og=n;
    while(n!=0)
    {
        rm=n%10;
        r=r*10+rm;
        n=n/10;
    }
    if(og==r)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}
