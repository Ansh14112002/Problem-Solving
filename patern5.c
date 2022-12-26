#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter no of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%c",'E'-j+1);
			
		}
		printf("\n");
	}
}
