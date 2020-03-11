#include<stdio.h>
int fact(int a);
int main()
{   
	int n,i;
	float sum=0;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 sum=sum+(i/(float)fact(i));
	printf("The sum of %d terms of the series 1/N! is=%f\n",n,sum);
}
int fact(int a)
{
	if(a==0||a==1)
	 return 1;
	else
	 return a*fact(a-1);
} 

