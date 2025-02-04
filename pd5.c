#include<stdio.h>
//PROBLEM 1

// void main()
// {
//     int a[10],n,maxcount=0,count,i;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Enter array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//         for(i=0;i<n;i++)
//         {
//             if(a[i]==1)
//             {
//                 count=count+1;
//                 if(count>maxcount)
//                 {
//                     maxcount=count;
//                 }
//             }
//             else
//             {
//                 count=0;
//             }
//         }
    
//     printf("maximum count of 1 : %d",maxcount);
// }
//**************************Using function*************************************
// void max(int n,int a[10])
// {
//     int i,count=0,maxcount=0;
//     for(i=0;i<n;i++)
//     {
//         if(a[i]==1)
//         {
//             count=count+1;
//             if(count>maxcount)
//             {
//                 maxcount=count;
//             }
//         }
//         else
//         {
//             count=0;
//         }
//     }
//     printf("Maximum count of 1 : %d",maxcount);
// }
// void main()
// {
//     int n,a[10],i;
//     printf("Enter size:");
//     scanf("%d",&n);
//     printf("Enter array 1 and 0: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     max(n,a);
// }

//PROBLEM 2

// void main()
// {
//     int n,a[10],i,j,mid,count=0;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Enter array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     mid=n/2;
//     printf("\n mid: %d",mid);
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<=i;j++)
//         {
//             if(a[i]==a[j])
//             {
//                 count=count+1;
//             }
//         }
//         if(count>mid)
//         {
//             printf("\nThere is majorty element: %d",a[i]);
//             break;
//         }
//     }
//     if(count==0)
//     {
//         printf("There is no majority element!!");
//     }
// }

//PROBLEM 3,4

// void main()
// {
//     int n,a[10],i,j,k,sum=0,max=0,min;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Enter array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=i;j<n;j++)
//         {
//             sum=0;
//             for(k=i;k<=j;k++)
//             {
//                 printf("%d",a[k]);
//                 sum=sum+a[k];
//                 if(max<sum)
//                 {
//                     max=sum;
//                 } 
//                 else if(min>sum)
//                 {
//                     min=sum;
//                 }
//             }
//             printf(" sum %d",sum);
//             printf("\n"); 
            
//         }
//     }
//     printf("maxsum= %d",max);
//     printf("\nminsum: %d",min);
                    
// }

//PROBLEM 6
// void main()
// {
//     int odd[10],even[10],a[10],n;
//     int i,j=0,k=0;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Enter array:");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         if(a[i]%2==0)
//         {
//             even[j]=a[i];
//             j++;
//         }
//         else
//         {
//             odd[k]=a[i];
//             k++;
//         }
//     }
//     for(i=0;i<j;i++)
//     {
//         printf("%d",even[i]);
//     }
//     printf("\n");
//     for(i=0;i<k;i++)
//     {
//         printf("%d",odd[i]);   
//     }
// }

//PROBLEM 7

void main()
{
    int a[10],i,j,n,lsum,rsum;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        lsum=0;
        for(j=0;j<i;j++)
        {
            lsum=lsum+a[j];
        }
        rsum=0;
        for(j=i+1;j<n;j++)
        {
            rsum=rsum+a[j];
        }
        if(lsum==rsum)
        {
            printf("%d",i);
        }
    }
}