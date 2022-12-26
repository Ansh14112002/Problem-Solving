#include<stdio.h>
main()
{
    int a,n,i,j,s=0,k=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=n;i!=0;i--)
    {
        a=1;
        for(j=i;j!=0;j--)
        {
            a=(a*j);
            k=a/i;
        }
        s=s+k;
    }
    printf("%d",s);
}