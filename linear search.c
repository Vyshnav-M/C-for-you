#include<stdio.h>

int main()
{
    int a[50],n,item,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
     if(a[i]==item)
      {
      printf("Item found at position %d",i+1);
      break;
      }
    }
    if(i==n)
    printf("Item not found");
}
