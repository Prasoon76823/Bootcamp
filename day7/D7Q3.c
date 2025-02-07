#include<stdio.h>
//PROBLEM 3

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    while(n>0)
    {
        if((n&(n-1)))
        {
            printf("not Power of 2");
            break;
        }
        else
        {
            printf("Power of 2");
            break;
        }
    }
}
// n=4 power of 2
