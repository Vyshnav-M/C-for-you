#include<stdio.h>
#include<math.h>
void main()
{
	int a[50],n,i;
	float mean,sd,var,s1=0,s2=0;
	printf("Enther the number of elements\n");
	scanf("%d",&n);
	printf("Enter the %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s1+=a[i];
	}
	mean=s1/n;
	for(i=0;i<n;i++)
	{
		s2+=((mean-a[i])*(mean-a[i]));
	}
	var=s2/n;
	sd=sqrt(var);
	printf("Mean=%f\nVariance=%f\nStandard Diviation=%f\n",mean,var,sd);
}
