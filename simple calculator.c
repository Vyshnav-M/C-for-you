/*Simple calculator*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int ch;
	float a,b;
	printf("Enter two variables a,b\n");
	scanf("%f%f",&a,&b);
	printf("Press\n 1 for addition\n 2 for substraction\n 3 for multiplication\n 4 for division\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("%f+%f=%f",a,b,a+b);
		break;
		case 2:printf("%f-%f=%.3f",a,b,a-b);
		break;
		case 3:printf("%f*%f=%.3f",a,b,a*b);
		break;
		case 4:printf("%f/%f=%.3f",a,b,a/b);
		break;
		default:printf("Invalid choice\n");
		break;
	}
}

