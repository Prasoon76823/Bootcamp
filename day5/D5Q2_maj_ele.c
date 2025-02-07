#include<stdio.h>
//PROBLEM 2

void main()
{
    int n,a[10],i,j,mid,count=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mid=n/2;
    printf("\n mid: %d",mid);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(a[i]==a[j])
            {
                count=count+1;
            }
        }
        if(count>mid)
        {
            printf("\nThere is majorty element: %d",a[i]);
            break;
        }
    }
    if(count==0)
    {
        printf("There is no majority element!!");
    }
}
