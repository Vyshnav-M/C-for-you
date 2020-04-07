#include<stdio.h>
double square(double);
double cube(double);
int main()
{
    int n,i,j;
    printf("\nPrint the squares and cube from 1 to ? with .1 interval");
    scanf("%d",&n);
    printf("\n  N\t   N^2\t\t   N^3\n");
    for(i=1;i<n;i++)
     for(j=0;j<10;j++)
      printf(" %.1lf\t%lf\t%lf\n",i+j/10.0,square(i+j/10.0),cube(i+j/10.0)); 
    return 0;
}
double square(double a)
{
 return (a*a);
}
double cube(double b)
{
 return (b*b*b);
}