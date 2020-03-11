/*Program to find the sum of first n natural numbers*/
#include<stdio.h>
void main()
{
	int n,sum=0,i;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 sum+=i;
	printf("The sum of %d natural numbers is=%d\n",n,sum);
}
