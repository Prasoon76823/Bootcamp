#include<stdio.h>
//PROBLEM 7

void main()
{
    int n,m,count=0;
    printf("Entre n,m: ");
    scanf("%d%d",&n,&m);
    int xor=n^m;
    while(xor>0)
    {
        count+=(xor&1);
        xor=xor>>1;
    }
    printf("%d",count);
}  