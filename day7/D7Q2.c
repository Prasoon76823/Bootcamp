#include<stdio.h>
//PROBLEM 2

void main()
{
    int n,count=0,k,cnt=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int  i=0;i<5;i++)
    {
        if(n&(1<<i))
    {
        count++;
    }
    }
    printf("Count: %d",count);
}
//n=21 count=3