#include<stdio.h>
//PROBLEM 9
void main()
{
    int a[10],n,i,target;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter target element: ");
    scanf("%d",&target);
    int count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            count=count+1;
        }
    }
    printf("Frequency: %d",count);
}