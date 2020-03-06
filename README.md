#include<stdio.h>
int fact(int a);
int main()
{
    int i,n;
    float sum=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sum=sum+(1/(float)fact(i));
    }
    printf("sum is  %f",sum);
    }
int fact(int a)  
{
if(a==0||a==1)
  return 1;
else 
  return (a*fact(a-1));
}  
