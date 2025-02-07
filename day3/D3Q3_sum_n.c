#include<stdio.h>
//PROBLEM 3

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if( n==1)
    {
        return 1;
    }
    else
    {
        return(n+sum(n-1));
    }
}
void main()
{
    int n=5;
    printf("sum : %d",sum(n));
}

//sum : 15 