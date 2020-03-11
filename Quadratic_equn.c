/*Program to find the roots of a quadratic equation*/
#include<stdio.h>
#include<math.h>
void main()
{ 
	float a,b,c,r1,r2;
	printf("Enter the values of a,b,c of the quadratic equation ax^2+bx+c\n");
	scanf("%f%f%f",&a,&b,&c);
	if((b*b-4*a*c)<0)
	{
	  printf("The roots are imaginery");
	  return;
	}
	r1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
	r2=(-b-(sqrt(b*b-4*a*c)))/(2*a);
	printf("The roots are %f  ,  %f",r1,r2);
}
