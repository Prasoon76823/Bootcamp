#include<stdio.h>
//PROBLEM 6
void main()
{
    int odd[10],even[10],a[10],n;
    int i,j=0,k=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even[j]=a[i];
            j++;
        }
        else
        {
            odd[k]=a[i];
            k++;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d",even[i]);
    }
    printf("\n");
    for(i=0;i<k;i++)
    {
        printf("%d",odd[i]);   
    }
}
