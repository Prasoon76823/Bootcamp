#include<stdio.h>
//PROBLEM 8

void main()
{
    int a[10],n,i,max=0,min;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\nMaximum element: %d",max);
    printf("\nMinimum element: %d",min);
    int diff=max-min;
    printf("\nMaximum difference: %d",diff);
}