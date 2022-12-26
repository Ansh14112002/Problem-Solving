#include<stdio.h>
main()
{
    int n,i,a[100],t;
    printf("enter the number n");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=1;i<n;i++)
    { 
        
        if(a[i]<t)
        {
            t=a[i];
        }
    }
    printf("%d",t);
}