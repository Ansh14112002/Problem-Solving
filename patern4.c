#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter no of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=(2*i-1);j++)
		{
			printf("%c",'A'+j-1);	
		}
		printf("\n");
	}
}
