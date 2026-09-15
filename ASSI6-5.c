#include <stdio.h>
int main()
{
    int lw,up,i,j,cnt=0,isprime;
    printf("Enter the lower limit: ");
    scanf("%d",&lw);
    printf("Enter the upper limit: ");
    scanf("%d",&up);
    printf("Prime numbers between %d and %d are:\n",lw,up);
    for (i = lw; i <= up; i++)
    {
        if(i<2)
        
            continue;
        
        isprime=1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isprime=0;
                break;
            }
        }
        if (isprime==1 && i>1)
        {
            printf("%d ", i);
            cnt++;
        }
    }
    return 0;
}
