#include<stdio.h>
int main()
{
	int a,b,max;
	printf("Enter the two numbers\n");
	scanf("%d%d",&a,&b);
	max=(a>b)?a:b;
	while(true)
	{
		if(max%a==0&&max%b==0)
		{
	       printf("The least common multiple (LCM/GCD) of %d and %d is %d\n",a,b,max);
		   break;
	    }
	    max++;
	}
	return 0;
}
