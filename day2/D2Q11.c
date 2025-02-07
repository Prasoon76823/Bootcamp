#include<stdio.h>
void main()
{
    //PROBLEM 11

    int n=123,count=0,sum=0;
    while(n!=0)
    {
        int r=n%10;
        count=count+1;
        sum=sum+r;
        n=n/10;
    }
    printf("%d",count);
    printf("\nSum=%d",sum);

    //3
}