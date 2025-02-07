#include<stdio.h>
//PROBLEM 2,4

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        return(fib(n-1)+fib(n-2));
    }
    
}
void main()
{
    int n=5,a[100];
    printf("Fibonacci series\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",fib(i));
    }
    printf("\nArray of Fibonnaci\n");
    for(int i=0;i<n;i++)
    {
        a[i+1]=fib(i);
        printf("%d",a[i+1]);
    }
    printf("\nnth term: %d",a[n]);
    
}

// 01123