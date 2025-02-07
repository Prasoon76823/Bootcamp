#include<stdio.h>
//PROBLEM 3,4

void main()
{
    int n,a[10],i,j,k,sum=0,max=0,min;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            sum=0;
            for(k=i;k<=j;k++)
            {
                printf("%d",a[k]);
                sum=sum+a[k];
                if(max<sum)
                {
                    max=sum;
                } 
                else if(min>sum)
                {
                    min=sum;
                }
            }
            printf(" sum %d",sum);
            printf("\n"); 
            
        }
    }
    printf("maxsum= %d",max);
    printf("\nminsum: %d",min);
                    
}
