#include<stdio.h>
main()
{
	int i,j,n,k;
	printf("enter no of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(j=n;j>i;j--)
	{
		printf(" ");
	}
	for(k=1;k<=(2*i-1);k++)
	{
		printf("*");
	}
	printf("\n");
}
}
