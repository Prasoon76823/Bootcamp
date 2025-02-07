#include<stdio.h>
//PROBLEM 12
// int binary(int n,int a[])
// {
//     int beg,end,mid;
//     beg=0;
//     end=4;
//     while(beg<=end)
//     {
//         mid=(beg+end)/2;
//         if(n==a[mid])
//         {
//             return mid;
//         }
//         else if(n>a[mid])
//         {
//             beg=mid+1;
//         }
//         else
//         {
//             end=mid-1;
//         }
//     }
//     return -1;
// }
// void main()
// {
//     int n=4;
//     int a[]={1,2,3,4,5};
//     int c=binary(n,a);
//     if(c!=-1)
//     {
//         printf("Element found");
//     }
//     else{
//         printf("Element not found");
//     }
// } 
//********************************************************* 
// int binary(int a[],int beg,int end,int n)
// {
//     while(beg<=end)
//     {
//         int mid=(beg+end)/2;
//         if(a[mid]==n)
//         {
//             return mid;
//         }
//         else if(a[mid]>n)
//         {
//             end=mid=1;
//         }
//         else
//         {
//             beg=mid+1;
//         }
//     }
//     return -1;
// }
// void main()
// {
//     int a[]={1,2,3,4,5};
//     int n,c;
//     printf("Enter element to search:");
//     scanf("%d",&n);
//     c=binary(a,0,4,n);
//     if(c!=0)
//     {
//         printf("Element found");
//     }
//     else
//     {
//         printf("Element not found");
//     }
// }
//*******************************Using recursion************************************* 
int binary(int a[],int beg,int end,int n)
{
    if(beg>end)
    {
        return -1;
    }
    int mid=(beg+end)/2;
    if(a[mid]==n)
    {
        return mid;
    }
    else if(a[mid]>n)
    {
        return(a,beg,mid-1,n);
    }
    else
    {
        return(a,mid+1,end,n);
    }
}
void main()
{
    int n,c,i=0;
    int a[]={1,2,3,4,5};
    printf("Enter element to search: ");
    scanf("%d",&n);
    c=binary(a,0,4,n);
    if(c!=-1)
    {
        printf("element found");
    }
    else
    {
        printf("Element not found");
    }
}