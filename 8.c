#include<stdio.h>
int main()
{
    int i,m=0,flag=0,num;
    printf("enter a no ");
    scanf("%d",&num);

    m=num/2;

    for(i=2;i<=m;i++)
    {
        if(num%i==0)
        {
            printf("not prime");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("prime");
    }


}
