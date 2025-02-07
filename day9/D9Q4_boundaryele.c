#include<stdio.h>
void main()
{
    int a[10][10],i,j,n;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter arrya: ");
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
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    int sum2=0;
    for(i=0;i<n;i++)
    {
        int sum=0,sum1=0;
        for(j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==(n-1) || j==(n-1))
            {
                printf("%d\t",a[i][j]);
                sum=sum+a[i][j];
                sum1=sum1+a[j][i];
                sum2=sum2+a[i][j];
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\t%d",sum);
        printf("\t%d",sum1);
        printf("\n");
    }
    printf("Total sum: %d",sum2);
}