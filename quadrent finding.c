#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter the coordinate of the point\n");
	scanf("%d%d",&x,&y);
	if(x==0&&y==0)
	  printf("The point is origin");
	else if(x==0&&y!=0)
	  printf("The point is on Y axis\n");
	else if(x!=0&&y==0)
	  printf("The point is on X axis\n");  
	else if(x>0&&y>0)
	  printf("The point is in first quadrent\n");
	else if(x<0&&y>0)
	  printf("The point is in second quadrent\n");
	else if(x<0&&y<0)
	  printf("The point is in third quadrent\n");
	else
	  printf("The point is in forth quadrent\n");
  }
	  
