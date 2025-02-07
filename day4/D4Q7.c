#include<stdio.h>
//PROBLEM 7

void main()
{
    int a[10],n,i,j,f=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%d",a[i]);
        }
    }
}