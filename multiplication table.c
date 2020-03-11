#include<stdio.h>
void main()
{
	int i,n,limit;
	printf("Enter the number to be multiplied and the limit of multiplication factor\n");
	scanf("%d%d,",&n,&limit);
	for(i=1;i<=limit;i++)
    {
		printf("  %d*%d=%d\n",n,i,n*i);
	}
}
