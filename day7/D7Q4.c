#include<stdio.h>
//PROBLEM 4

//n^n=0.......n^0=n

void main()
{
    int a[10],i,n,count=0,ans;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Entre array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
//*********************using ^ gate***************************
    for(i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    printf("%d",ans);
//***********************using loop*************************** 
    for(i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count%2!=0)
        {
            printf("%d",a[i]);
            break;
        }
    }
}