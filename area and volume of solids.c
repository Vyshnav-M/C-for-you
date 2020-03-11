#include<stdio.h>
#include<math.h>
void main()
{
	int ch;
	float a,r,h,x,y,z,pi=3.14;
	printf("Enter your choice\n1.Cube\n2.Cylinder\n3.Cuboid\n4.Cone\n5.Sphere\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		printf("Enter the side length of cube\n");
		scanf("%f",&a);
		printf("Surface area=%f   Volume=%f",6*a*a,a*a*a);
		break;
		case 2:
		printf("Enter the radius of base and height of cylinder\n");
		scanf("%f%f",&r,&h);
		printf("Surface area=%f   Volume=%f",2*pi*r*r+pi*r*2*h,pi*r*r*h);
		break;
		case 3:
		printf("Enter the lengths of 3 sides of the cuboid\n");
		scanf("%f%f%f",&x,&y,&z);
		printf("Surface area=%f   Volume=%f",2*x*y+2*x*z+2*y*z,x*y*z);
		break;
		case 4:
		printf("Enter the radius of base and hieght of cone\n");
		scanf("%f%f",&r,&h);
		printf("Surface area=%f   Volume=%f",pi*r*r+2*pi*r*sqrt(h*h+r*r),1/3*3.14*r*r*h);
		break;
		case 5:
		printf("Enter the radius of sphere\n");
		scanf("%f",&r);
		printf("Surface area=%f   Volume=%f",4*pi*r*r,4/3*pi*r*r*r);
		break;
		default:printf("invalid choice");
		break;
	}
}

