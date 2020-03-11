/*PASCAL'S TRIANGLE
 *        1
 *       1 1
 *      1 2 1
 *     1 3 3 1
 *    1 4 6 4 1
 *  1 5 10 10 5 1
 * . . . . . . . . . */
#include<stdio.h>
void main()
{
	int i,j,r,s,n=1;
	printf("Enter the number of rows\n");
	scanf("%d",&r);
	printf("Pascal's triangle containing %d rows is\n",r);
	for(i=0;i<r;i++)
	{
	  for(s=1;s<=r-i;s++)
		  printf("  ");
	  for(j=0;j<=i;j++)
	  {
	  if(j==0||i==0)
	     n=1;
	  else
	     n=n*(i-j+1)/j;
	  printf("%4d",n);
      }
      printf("\n");
   }
}

