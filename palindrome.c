#include<stdio.h>
#include<conio.h>
main()
{
int n,a,t,i,sum=0;
printf("enter your no");
scanf("%d",&n);
t=n;
while(t!=0)

{
a=t%10;
sum=a+sum*10;
t=t/10;
}
if(sum==n)
	printf("palindrome");
else
printf("not a palindrome");
}
