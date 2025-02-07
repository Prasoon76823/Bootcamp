#include<stdio.h>
void main()
{
    //PROBLEM 12

    int n=111,rev=0;
    int m=n;
    while(n!=0)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("Reverse: %d",rev);
    if(rev==m)
    {
        printf("\nNo. is pallindrome");
    } 
    else
    {
        printf("\nNo. is not pallindrome");
    }

}