#include<stdio.h>

//PROBLEM 1

void main()
{
    int n,k;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter k: ");
    scanf("%d",&k); 
    if(n&(1<<k))
    {
        printf("true");
    }
    else
    {
        printf("False");
    }
}
//n=21 k=2 true
