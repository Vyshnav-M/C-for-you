/*This is a program to find the sum of n terms of the series 1,1/2,1/3,1/4......1/n*/
#include<stdio.h>
void main()
{
	int n,i;
	float sum=0;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 sum=sum+(1/(float)i);
 }
	printf("The sum of %d elements of the series 1/1,1/2,1/3.... is=%f\n",n,sum);
}
