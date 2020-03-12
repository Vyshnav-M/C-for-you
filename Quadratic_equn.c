/*Program to find the roots of a quadratic equation*/
#include<stdio.h>
#include<math.h>
void main()
{ 
	float a,b,c,det,r1,r2,real,img;
	printf("Enter the values of a,b,c of the quadratic equation ax^2+bx+c\n");
	scanf("%f%f%f",&a,&b,&c);
        det=b*b-4*a*c;
	if(det<0)
	{
          Real=-b/(2*a);
          img=sqrt(-det)/(2*a);
	  printf("The roots are %.2f+%.2f and %.2f-%.2f",real,img,real,img);
	}
        else
        {
	r1=(-b+sqrt(det))/(2*a);
	r2=(-b-sqrt(det))/(2*a);
	printf("The roots are %.2f  ,  %.2f",r1,r2);
        }
}
