#include<stdio.h>
//PROBLEM 6
void main()
{
    int n,i,a[10],temp;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
