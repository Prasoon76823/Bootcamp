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
    printf("\nBefore transpose:\n");
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
        for(j=0;j<n;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("\nAfter transposing:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<n;j++)
        {
            if(i==0)
            {
                int temp=b[i][j];
                b[i][j]=b[i+(n-1)][j];
                b[i+(n-1)][j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
}