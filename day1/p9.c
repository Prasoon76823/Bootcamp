#include<stdio.h>
void main()
{
    int i,j;
    for(i=2;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        for(j=2;j<=i;j++)
        {
            printf("%d",j);
        }
        // for(j=2;j<=i;j++)
        // {
        //     printf("%d",j);
        // }
        // for(j=i;j<=5;j++)
        // {
        //     printf("%d",j);
        // }
        printf("\n");
    }
}