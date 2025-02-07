#include<stdio.h>
//PROBLEM 6
void sumd(int n)
{
    int sum=0,r;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("Sum: %d",sum);
}
void main()
{
    int n=123;
    sumd(n);
}