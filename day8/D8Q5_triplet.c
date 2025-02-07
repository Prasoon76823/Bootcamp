#include<stdio.h>
//PROBLEM 5....(to find the triplet in an array)

void main()
{
    int a[10],n,i;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Entre array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count =0;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count==3)
        {
            printf("%d",a[i]);
        }
    }
}