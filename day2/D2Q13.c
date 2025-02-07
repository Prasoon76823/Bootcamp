#include<stdio.h>
void main()
{
    //PROBLEM 13

    int n=153,d=0,sum=1,r;
    int m=n;
    int t=m;
    while(n!=0)
    {
        d=d+1;
        n=n/10;
    }
    printf("d= %d",d);
    printf("m:%d",m);
    while(m!=0)
    {
        r=m%10;
        m=m/10;
        sum=sum+pow(r,d);
    }
    printf("\nsum=%d",sum);

    if(sum==t)
    {
        printf("\nNo. is armstrong");
    }
    else
    {
        printf("\nNo. is not armstrong");
    }
}