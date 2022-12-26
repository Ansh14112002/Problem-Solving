#include<stdio.h>
main()
{
    int a[100],i,n,s=0,t=0,st;
    printf("enter the number n");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        n=n/2;
        for(i=0;i<n;i++)
        {
            s=s+a[i];
        }
        for(i=n;i<2*n;i++)
        {
            t=t+a[i];
        }
        st= s*t;
        printf("%d",st);
    }
    else
    {
        n=(n-1)/2;
        for(i=0;i<n;i++)
        {
            s=s+a[i];
        }
        for(i=n;i<2*n+1;i++)
        {
            t=t+a[i];
        }
        st= s*t;
        printf("%d",st);
    }

}