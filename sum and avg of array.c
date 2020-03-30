#include<stdio.h>

void main()
{
 int n,a[50],i,sum=0;
 float avg;
 printf("Enter the number of elements\n");  
 scanf("%d",&n);
 printf("Enter the elements\n"); 
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  sum=sum+a[i];
 }
avg=(float)sum/n;
printf("The sum of numbers=%d\nAverage=%.3f",sum,avg);
}