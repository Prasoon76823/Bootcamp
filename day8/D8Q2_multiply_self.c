#include<stdio.h>
//PROBLEM 2....(multiply all element except self)

void main()
{
    int a[10],b[100],n,i;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int mul;
    for(i=0;i<n;i++)
    {
        mul=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                mul=mul*a[j];
            }
            b[i]=mul;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
}