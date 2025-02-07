#include<stdio.h>
vid main()
{
    //PROBLEM 7

    int a1,a2,a3,sum,a,b,c;
    printf("Enter angles a1,a2,a3:");
    scanf("%d%d%d",&a1,&a2,&a2);
    printf("Enter sides a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a1>0 && a2>0 && a3>0 && a>0 && b>0 && c>0)
    {
        sum=a1+a2+a3;
        if(sum==180||(a+b>c&&b+c>a&&a+c>b))
        {
            printf("it is a triangle");
        }
        else
        {
            printf("it is not a traingle");
        }
    }
}