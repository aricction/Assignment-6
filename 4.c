#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("enter the value of n");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {

        sum=sum+i*i;
    }
    printf("%d ",sum);
}


