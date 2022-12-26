#include<stdio.h>
main()
{
	int i,j,k,n;
	printf("enetr no of rows that u want to print");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
