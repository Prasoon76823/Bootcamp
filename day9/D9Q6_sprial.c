#include<stdio.h>
//SPRIAL MATRIX
void main()
{
    int a[10][10],b[10][10],i,j,n,m;
    printf("Enter size m: ");
    scanf("%d",&m);
    printf("Enter size n: ");
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
    int top=0,left=0,down=m-1,right=n-1,dir=0;
    while(top<=down && left<=right)
    {
        for(i=left;i<=right;i++)
        {
            printf("%d",a[top][i]);
        }
        top++;
        for(i=top;i<=down;i++)
        {
            printf("%d",a[i][right]);
        }
         right--;
        
        for(i=right;i>=left;i--)
        {
            printf("%d",a[down][i]);
        }
        down--;
        for(i=down;i>=top;i--)
        {
            printf("%d",a[i][left]);
        }
        left++;
    }
}