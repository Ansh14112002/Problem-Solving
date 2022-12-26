#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,t,b,a;
	int sum=0;
	int cout=0;
	printf("ente any no");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
	t=t/10;
	cout++;
}
t=n;
while(t!=0)
{
b=t%10;
sum=sum+pow(b,cout);
t=t/10;
}
if(sum==n)
{
	printf("armstrong");
}
	else
	{
	printf("not armstrong");
}
}
