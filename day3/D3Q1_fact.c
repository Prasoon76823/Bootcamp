#include<stdio.h>
#include<string.h>
//PROBLEM 1

//*************************Using recursion********************************** 
// int fact(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     else if(n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return(n*fact(n-1));
//     }
// }
// void main()
// {
//     int n=5;
//     printf("fact=%d",fact(n));
// }

//fact=120

//*****************With function************************** 

int fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
void main()
{
    int n=5;
    printf("fact: %d",fact(n));
}

//fact=120

