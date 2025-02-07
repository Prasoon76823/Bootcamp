#include<stdio.h>
//PROBLEM 3

void main()
{
    int a[10],n,i,j,s,k=3,sum=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;j=k-1;
    printf("Enter sum: ");
    scanf("%d",&s);
    while(i<j)
    {
        sum=0;
        sum=a[i]+a[j-1]+a[j];
        if(s==sum)
        {
            printf("%d,%d,%d",a[i],a[j-1],a[j]);
            break;
        }
        i++;
        j++;
    }
}