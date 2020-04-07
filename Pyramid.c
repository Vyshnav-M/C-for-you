#include<stdio.h>

int main()
{
    int i,j,k,n,sum=0,count;
    printf("\nEnter the number of rows\n");
    scanf("%d",&n);
    count=n;
    for(i=1;i<=n;i++)
    {
     for(k=count;k>0;k--)
      printf(" ");
     for(j=1;j<=i;j++)
     {
       printf(" %d",i);
     }
     count--;
     printf("\n");
    }
    return 0;
}