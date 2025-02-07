#include<stdio.h>
void main()
{
    //PROBLEM 15

    int n=145,i,fact,sum=0,r;
    int m=n;
    while(n!=0)
    {
        r=n%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        
        n=n/10;
        sum=sum+fact;
        
    }

    printf("\nSum= %d",sum);
    if(sum==m)
    {
        printf("\nno. is strong");
    }
    else
    {
        printf("\nno. is not strong");
    }

    //Sum= 145
    //no. is strong
}