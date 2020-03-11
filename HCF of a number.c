#include<stdio.h>
int main()
{
	int a,b,i,min;
	printf("Enter the two numbers\n");
	scanf("%d%d",&a,&b);
	min=(a<b)?a:b;
	for(i=min;i>=1;i--)
	{
		if(a%min==0&&b%min==0)
		{
			printf("Highest common factor(HCF) of %d and %d is %d\n",a,b,min);
			break;
		}
		min--;
	}
}
 
