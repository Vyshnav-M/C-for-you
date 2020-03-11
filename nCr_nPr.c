#include<stdio.h>
int fact(int a);
void main()
{
	int n,r;
	float npr,ncr;
	printf("Enter the values of n,r\n");
	scanf("%d%d",&n,&r);
	npr=(float)fact(n)/(fact(n-r));
	ncr=(float)fact(n)/(fact(r)*fact(n-r));
	printf("\n%dP%d = %f\n%dC%d = %f",n,r,npr,n,r,ncr);
}
int fact(int a)
{
	if(a==0||a==1)
	 return 1;
	else
	 return a*fact(a-1);
} 

	
