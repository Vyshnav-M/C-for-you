#include<stdio.h>
int main()
{
    int a[50],n,j,i,temp=0;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
     for(j=0;j<(n-i-1);j++)
     {
      if(a[j]>a[j+1])
       {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
       }
     }
    }
    printf("sorted array is\n");
    for(i=0;i<n;i++)
    {
     printf("%d\n",a[i]);
    }
    
}