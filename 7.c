#include<stdio.h>

int main()
{
    int i,n,digit,count=0;


    printf("enter a no");
    scanf("%d",&n);

  while(n !=0)
  {
      n=n/10;
      count++;
  }
  printf("digits= %d ",count);

}
