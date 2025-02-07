#include<stdio.h>
//PROBLEM 5

void main()
{
    int n,i,a[10];
    int n1=0,n2=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Entre array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int xor=0;
    for(i=1;i<n;i++)
    {
        xor=xor^a[i];
    }
    int rsb=xor & -xor;
    for(i=0;i<n;i++)
    {
        if(a[i]&rsb)
        {
            n1^=a[i];
        }
        else
        {
            n2^=a[i];
        }
    }
    printf("%d",n1);
    printf("\n%d",n2);
}
// 1 2 2 3 3 4......1,4
