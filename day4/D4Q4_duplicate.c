#include<stdio.h>
//PROBLEM 4

void main()
{
    int a[10],i,f=0,j,n;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]==a[i])
            {
                f=1;
                for(int k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--; 
            }
        }
    }
    if(f==0)
    {
        printf("no duplicates");
    }
    else
    {
        printf("Dupliacte");
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}