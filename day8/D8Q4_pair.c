#include<stdio.h>
//PROBLEM 4....(pair equal to sum x)

void main()
{
    int n,a[10],i,k=2,s;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter sum: ");
    scanf("%d",&s);
// ********************Sliding window******************************
    int f=0,j=k-1;
    for(i=0;i<n;i++)
    {
        int sum=a[i]+a[j];
        if(sum==s)
        {
            printf("%d,%d",a[i],a[j]);
            f=1;
        }
        j++;
//************************Normal loop***************************** 
        for(int j=i;j<n;j++)
        {
            if(a[i]+a[j]==s)
            {
                printf("%d%d",a[i],a[j]);
                f=1;
            }
        }
    }
    if(f==0)
    {
        printf("There is no such element!!");
    }
}