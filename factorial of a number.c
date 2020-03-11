#include<stdio.h>
int fact(int a);
void main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	printf("The factorial of %d is %d",n,fact(n));
}
int fact(int a)
{
	if(a==0||a==1)
	 return 1;
	else
	 return a*fact(a-1);
} 

