#include<stdio.h>
void main()
{
	int a,b,i,n,flag;
	printf("Enter the range of numbers(a<b)\n");
	scanf("%d%d",&a,&b);
	printf("Prime numbers between %d and %d is\n",a,b);
	for(n=a;n<=b;n++)
	{
		flag=0;
		for(i=2;i<=n/2;i++)
	    {
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0&&n!=1)
		printf("%d\t",n);
	}
}

