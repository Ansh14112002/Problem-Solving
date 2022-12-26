#include<stdio.h>
main()
{
    int i,j,x=10,l,arr[1000],n,k,q;
    printf("enter the number of elements");
    scanf("%d",&q);
    printf("enter the number k");
    scanf("%d",&k);
    printf("enter the elements of array");
    for(i=0;i<q;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<q;i++)
    {
        if(arr[i]<k)
        {
            while(arr[i]/10!=0)
            {
                j=arr[i]%x;
                 l=arr[i]%(10*x);
                if((j-l)==1)
                {
                    printf("%d",arr[i]);
                }
                arr[i]=arr[i]/10;
            }
         }
    }
        
}