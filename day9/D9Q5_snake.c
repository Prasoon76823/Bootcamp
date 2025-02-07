#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,n;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<n;j++)
            {
                printf("\t%d",a[i][j]);
            }
        }
        else
        {
            for(j=n-1;j>=0;j--)
            {
                printf("\t%d",a[i][j]);
            }
        }
        printf("\n");
    }
}