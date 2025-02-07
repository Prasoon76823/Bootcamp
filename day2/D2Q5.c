#include<stdio.h>
void main()
{
    //PROBLEM 5

    int n;
    printf("Enter n:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("n is 0");
    }
    else if(n>0)
    {
        printf("n is positive");
    }
    else{
        printf("n is negative");
    }
}