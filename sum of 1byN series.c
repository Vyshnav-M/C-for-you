#include<stdio.h>
void main()
    {
      float sum=0;
      int n,i;
      printf("enter a number\n");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
         sum=sum+(1/(float)i);
      printf("\nthe sum is...%f",sum);
    }
    