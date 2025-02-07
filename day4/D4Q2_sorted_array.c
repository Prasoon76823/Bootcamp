#include<stdio.h>
//PROBLEM 2

void main()
{
    int a[5],f=0;
    printf("Enter array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]<a[i+1])
        {
            f=0;
        }
        else
        {
            f=1;
        }
    }
    if(f==0)
    {
        printf("Array sorted");
    }
    else
    {
        printf("Not sorted");
    }
}
