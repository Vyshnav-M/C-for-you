#include<stdio.h>
#include<math.h>
void main()
{
	int ch;
	float r,a,b;
	printf("Enter your choice\n1.circle\n2.rectangle\n3.triangle\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		printf("Enter the radius of circle");
		scanf("%f",&r);
		printf("Area=%f  Perimeter=%f",3.14*r*r,2*3.14*r);
		break;
		case 2:
		printf("Enter the length and width of rectangle");
		scanf("%f%f",&a,&b);
		printf("Area=%f  Perimeter=%f",a*b,2*(a+b));
		break;
		case 3:
		printf("Enter the base and height of triangle");
		scanf("%f%f",&a,&b);
		printf("Area=%f  Perimeter=%f",.5*a*b,a+b+(sqrt(a*a+b*b)));
		break;
		default:printf("Invalid choice");
		break;
	}
}
