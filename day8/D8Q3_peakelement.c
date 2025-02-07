#include<stdio.h>
//PROBLEM 3....(Peak element)

void main()
{
    int n,a[10],i;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i-1]&&a[i]>a[i+1])
        {
            printf("Peak element is at index: %d",i);
            printf("\nPeak element: %d",a[i]);
        }
    }
}
