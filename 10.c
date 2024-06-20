#include<stdio.h>
int main()
{
    int n,rem=0,rev;

    printf("enter any no ");
    scanf("%d",&n);

    while(n !=0)
    {
        rem=n % 10;
        rev= rev * 10 + rem;
        n=n/10;

    }
    printf(" %d ",rev);
}
