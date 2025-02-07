#include<stdio.h>
//PROBLEM 10

int ndigit(int n)
{
    static int count=0;
    if(n>0)
    {
        count++;;
        ndigit(n/10);
    }
    return count;
}
void main()
{
    int n=123;
    int count=ndigit(n);
    printf(" No. of digit: %d",count);
}

//No. of digit: 3