#include<stdio.h>
//PROBLEM 2 UNION

void main()
{
    int a[10],b[10],c[10];
    int i,f=0,j,n,m;
    printf("Enter 1st size: ");
    scanf("%d",&n);
    printf("Enter 1st array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter 2nd size: ");
    scanf("%d",&m);
    printf("Enter 2nd array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int p=n+m;
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<m;j++)
    {
        c[i+j]=b[j];
    }
    printf("After adding\n");
    for(i=0;i<p;i++)
    {
        printf("%d",c[i]);
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<i;j++)
        {
            if(c[j]==c[i])
            {
                f=1;
                for(int k=j;k<p-1;k++)
                {
                    c[k]=c[k+1];
                }
                p--;
                j--; 
            } 
        }
    }
    if(f==0)
    {
        printf("\nno duplicates");
    }
    else
    {
        printf("\nDuplicate");
    }
    printf("\n");
    for(i=0;i<p;i++)
    {
        printf("%d",c[i]);
    }
}
//********************sir's wrong code*****************************
// void main()
// {
//     int a[10],b[10],i,j,n,m;
//     printf("Enter first: ");
//     scanf("%d",&n);
//     printf("Enter 1st array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter 2nd size: ");
//     scanf("%d",&m);
//     printf("Enter 2nd array: ");
//     for(i=0;i<m;i++)
//     {
//         scanf("%d",&b[i]);
//     }
//     i=0,j=0;
//     while(i<n && j<m)
//     {
//         if(a[i]<a[j])
//         {
//             //printf("%d",a[i]);
//             i++;
//         }
//         else if(a[i]>a[j])
//         {
//             //printf("%d",a[j]);
//             j++; 
//         }
//         else
//         {
//             printf("%d",a[j]);
//             i++;
//             j++;
//         }
//     }
//     while(i<n){
//         printf("%d",a[i++]);
//     }
//     while(j<m)
//     {
//         printf("%d",a[j++]);
//     }
// }