#include<stdio.h>
main()
{
	int i,j,k,n;
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
		for(i=5;i<=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		for(k=n;k<=(2*i-1);k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
