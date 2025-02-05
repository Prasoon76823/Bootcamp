#include<stdio.h>

//PROBLEM 1.....(Arrange postive and negative no. alternatively)

// void main()
// {
//     int a[10],n,i;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Enter array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int p[10],g[10],temp=0,t=0;
//     for(i=0;i<n;i++)
//     {
//         if(a[i]>0)
//         {
//             p[temp]=a[i];
//             temp++;
//         }
//         else
//         {
//             g[t]=a[i];
//             t++;
//         }
//     }  
//     printf("\n");
//     for(i=0;i<temp;i++)
//     {
//         printf("%d",p[i]);
//     }  
//     printf("\n");
//     for(i=0;i<t;i++)
//     {
//         printf("%d",g[i]);
//     }
//     printf("\n");
//     int c[10],r=0;
//     for(i=0;i<n;i++)
//     {
//         c[2*i]=p[i];
//         c[2*i+1]=g[i];
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%d,",c[i]);
//     }
// }

//PROBLEM 2....(multiple all element except self)

// void main()
// {
//     int a[10],b[100],n,i;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Enter array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int mul;
//     for(i=0;i<n;i++)
//     {
//         mul=1;
//         for(int j=0;j<n;j++)
//         {
//             if(i!=j)
//             {
//                 mul=mul*a[j];
//             }
//             b[i]=mul;
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%d",b[i]);
//     }
// }

//PROBLEM 3....(Peak element)

// void main()
// {
//     int n,a[10],i;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Enter array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         if(a[i]>a[i-1]&&a[i]>a[i+1])
//         {
//             printf("Peak element is at index: %d",i);
//             printf("\nPeak element: %d",a[i]);
//         }
//     }
// }

//PROBLEM 4....(pair equal to sum x)

// void main()
// {
//     int n,a[10],i,k=2,s;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Enter array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter sum: ");
//     scanf("%d",&s);
// // ********************Sliding window******************************
//     int f=0,j=k-1;
//     for(i=0;i<n;i++)
//     {
//         int sum=a[i]+a[j];
//         if(sum==s)
//         {
//             printf("%d,%d",a[i],a[j]);
//             f=1;
//         }
//         j++;
// //************************Normal loop***************************** 
//         for(int j=i;j<n;j++)
//         {
//             if(a[i]+a[j]==s)
//             {
//                 printf("%d%d",a[i],a[j]);
//                 f=1;
//             }
//         }
//     }
//     if(f==0)
//     {
//         printf("There is no such element!!");
//     }
// }

//PROBLEM 5....

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