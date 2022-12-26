#include<stdio.h>
main()
{
	int i,j,k,n,m,r,p;
	printf("enetr no of rows that u want to print");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(2*i-1);k++)
		{
			printf("*");
		}
		printf("\n");
	}
		for(m=1;m>=1;m++)
	{
		for(r=1;r<=i;r++)
		{
			printf(" ");
		}
		for(p=1;p<=(2*n-i);p++)
		{
			printf("*");
		}
		printf("\n");
	}
}
