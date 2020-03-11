/*Program to find the first n terms of the fibonacci series*/
#include<stdio.h>
void main()
{
	int f1=0,f2=1,f3=1,n,i;
	printf("Enter the limit\n");
	scanf("%d",&n);
	printf("Fibonacci series having %d terms is\n",n);
	printf("0\t");
	for(i=0;i<n-1;i++)
	{
	printf("%d\t",f3);
    f3=f1+f2;
    f1=f2;
    f2=f3;
}
}
