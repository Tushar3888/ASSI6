#include <stdio.h>
int main()
{
    int n,i,f=0,s=0,next;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",f);
        next=f+s;
        f=s;
        s=next;
    }
    return 0;
}
