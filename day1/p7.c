#include<stdio.h>
void main()
{
    int i,j;
    for(i=65;i<=70;i++)
    {
        for(j=i;j<=70;j++)
        {
            printf(" ");
        }
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        for(j=i-1;j>=65;j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    for(i=69;i>=65;i--)
    {
        for(j=i;j<=70;j++)
        {
            printf(" ");
        }
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        for(j=i-1;j>=65;j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}