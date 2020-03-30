#include<stdio.h>
void main()
{
    int a[50],n,i,larg,seclarg,temp;
    printf("how many elements?\n");
    scanf("%d",&n);
    printf("Enter %d elements to array\n",n);
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("The elements are\n");
    for(i=0;i<n;i++)
       printf("%d\t",a[i]);
    larg=a[0];
    seclarg=a[1];
    if(seclarg>larg)
    {
     temp=larg;
     larg=seclarg;
     seclarg=temp;
    }
    for(i=2;i<n;i++)
    {
     if(a[i]>larg)
      {
       seclarg=larg;
       larg=a[i];
      }
     else if(a[i]>seclarg&&a[i]!=larg)
      {
       seclarg=a[i];
      } 
    }
    printf("\nLargest number=%d\nSecond largest number=%d",larg,seclarg);
}
