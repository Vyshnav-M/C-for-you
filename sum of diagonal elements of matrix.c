#include<stdio.h>

int main()
{
    int a[10][10],row,col,i,j,sum=0;
    printf("\nEnter the number of rows and columns\n");
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++)
     {
      for(j=0;j<col;j++)
       {
        printf("\nEnter the element of position row=%d col=%d  ",i+1,j+1);
        scanf("%d",&a[i][j]);
       }
     }
    printf("The matrix is: \n");
    for(i=0;i<row;i++)
     {
      for(j=0;j<col;j++)
       {
        printf("%d ",a[i][j]);
       }
      printf("\n");
     }
    for(i=0;i<row;i++)
     {
      for(j=0;j<col;j++)
       {
        if(i==j)
        {
         sum+=a[i][j];
        }
       }
     }
    printf("The sum of diagonal elements=%d",sum);
    return 0;
}