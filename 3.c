#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("enter the value of n");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        if(i%2==1)

        sum=sum+i;
    }
    printf("%d ",sum);
}

