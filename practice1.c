#include<stdio.h>
// int digit(int n)
// {
//     int sum=0;
//     int r=n%10;
//     if(n>0)
//     {
//         return(r+digit(n/10));
//     }
// }
// void main()
// {
//     int n,res;
//     printf("Enter n:");
//     scanf("%d",&n);
//     res=digit(n);
//     printf("%d",res);
// }
//******************************************************************************* 
// int main()
// {
//     int i,j,k,a[100],n,sum,s;
//     printf("Enter size:");
//     scanf("%d",&n);
//     printf("Enter array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",a[i]);
//     }
//     printf("Enter sum:");
//     scanf("%d",&s);
//     for(i=0;i<n;i++)
//     {
//         for(j=i;j<=n;j++)
//         {
//             sum=0;
//             for(k=i;k<=j;k++)
//             {
//                 sum=sum+a[k];
//                 if(sum==s)
//                 {
//                     sum=a[k];
//                 }
//             }
//         }
//     }
//     printf("%d",sum);
// }
//********************************************************************** 
// int binary(int a[10],int n,int beg,int end)
// {
//     if(beg>end)
//     {
//         return -1;
//     }
//     int mid=(beg+end)/2;
//     if(a[mid]==n)
//     {
//         return mid;
//     }
//     else if(a[mid]>n)
//     {
//         return(binary(a,n,beg,mid-1));
//     }
//     else
//     {
//         return(binary(a,n,mid+1,end));
//     }
// }
// void main()
// {
//     int beg,end,mid,n,m,a[10];
//     printf("Enter size: ");
//     scanf("%d",&m);
//     printf("Enter array: ");
//     for(int i=0;i<m;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter element to search: ");
//     scanf("%d",&n);
//     beg=0;
//     end=n-1;
//     mid=(beg+end)/2;
//     int res=binary(a,n,beg,end);
//     if(res==-1)
//     {
//         printf("Element not found");
//     }
//     else
//     {
//         printf("Element found");
//     }
// }

void main()
{
    int a[100],n,s,i,left,right,summ;
    int f;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter sum: ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        left=i+1;
        right=n-1;
        int sum=0;
        while(left<right)
        {
            f=0;
            sum=a[i]+a[left]+a[right];
            if(sum==s)
            {
                f=1;
                printf("%d,%d,%d",a[i],a[left],a[right]);
                break;
            }
            else if(sum<s)
            {
                left=left+1;
            }
            else
            {
                right=right-1;
            }
        }
    }
    if(f==0)
    {
        printf("-1");
    }
}