#include<stdio.h>

int main()
{
    int mat1[10][10],mat2[10][10],pro[10][10];
    int r1,c1,r2,c2,i,j,k,sum;
    again: printf("\nEnter the row size and column size of matrix 1\n");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter the row size and column size of matrix 2\n");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
     {
      printf("!!!Multiplication not posible!!....enter valid row sizes and column sizes");
      goto again;
     }
    printf("\nEnter the elements first matrix\n");
    for(i=0;i<r1;i++)
    {
     for(j=0;j<c1;j++)
      {
       printf("at position %d %d:\t",i+1,j+1);
       scanf("%d",&mat1[i][j]);
      }
    }
    printf("\nEnter the elements second matrix\n");
    for(i=0;i<r2;i++)
    {
     for(j=0;j<c2;j++)
      {
       printf("at position %d %d:\t",i+1,j+1);
       scanf("%d",&mat2[i][j]);
      }
    }
    printf("\nThe first matrix=\n");
    for(i=0;i<r1;i++)
    {
     for(j=0;j<c1;j++)
      {
       printf("%d\t",mat1[i][j]);
      }
     printf("\n");
    }
    printf("\nThe second matrix=\n");
    for(i=0;i<r2;i++)
    {
     for(j=0;j<c2;j++)
      {
       printf("%d\t",mat2[i][j]);
      }
     printf("\n");
    }
    printf("\nThe product =\n");
    for(i=0;i<r1;i++)
    {
     for(j=0;j<c2;j++) 
      {
       sum=0;
       for(k=0;k<c1;k++)
        {
         sum+=mat1[i][k]*mat2[k][j];
         pro[i][j]=sum;
        }
       printf("%d\t",pro[i][j]);
      }
      printf("\n");
    }
 return 0;  
}