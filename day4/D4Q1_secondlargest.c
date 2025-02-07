#include<stdio.h>

//PROBLEM 1
void main()
{
    int a[5],secondlarge,large=0,i;
    printf("Enter array:");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(large<a[i])
        {
            secondlarge=large;
            large=a[i];
        }
        else if(a[i]>secondlarge && a[i]!=large)
        {
            secondlarge=a[i];
        }
    }
    printf("second large : %d",secondlarge);
}
