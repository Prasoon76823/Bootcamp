#include<stdio.h>
//PROBLEM 5
void main()
{
    int a[10],b[10],c[10],d[10];
    int n,i,j,k,m,u,p;
    printf("Enter 1st size: ");
    scanf("%d",&n);
    printf("Enter 1st array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter 2nd size: ");
    scanf("%d",&m);
    printf("Enter 2nd array: ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter 3rd size: ");
    scanf("%d",&u);
    printf("Enter 3rd array: ");
    for(i=0;i<u;i++)
    {
        scanf("%d",&c[i]);
    }
    p=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            for(k=0;k<u;k++)
            {
                if(a[i]==b[i]==c[i])
                {
                    d[p]=a[i];
                    p++;
                    break;
                }
            }
        }
    }
    for(i=0;i<p;i++)
    {
        printf("%d",d[i]);
    }
}