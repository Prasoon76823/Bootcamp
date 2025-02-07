#include<stdio.h>
//PROBLEM 8

void digit(int n)
{
    int j=n;
    for(int i=1;i<=n;i++)
    {
        printf("%d",j);
        j--;
    }

}  
void main()
{
    int n=5;
    digit(n);
}

//54321
