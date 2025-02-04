#include<stdio.h>

//PROBLEM 1

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
//     int count1=0;
//     int count2=0;
//     int count3=0;
//     for(i=0;i<n;i++)
//     {
//         if(a[i]==0)
//         {
//             count1=count1+1;
//         }
//         else if(a[i]==1)
//         {
//             count2=count2+1;
//         }
//         else
//         {
//             count3=count3+1;
//         }
//     }
//     for(i=0;i<count1;i++)
//     {
//         printf("0");
//     }
//     for(i=0;i<count2;i++)
//     {
//         printf("1");
//     }
//     for(i=0;i<count3;i++)
//     {
//         printf("2");
//     }
// }

//******************************************************* 
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
//     int count1=0;
//     int count2=0;
//     int count3=0;
//     int j=0,temp;
//     for(i=0;i<n;i++)
//     {
//         if(a[i]==2)
//         {
//             count1++;
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         if(a[i]!=2)
//         {
//             temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
//             j++;
//         }
//     }
//     j=0;
//     printf("\n count1: %d\n",count1);
//     for(i=0;i<n-count1;i++)
//     {
//         if(a[i]!=1)
//         {
//             temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
//             j++;
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%d",a[i]);
//     }
// }

//PROBLEM 2 UNION

// void main()
// {
//     int a[10],b[10],c[10];
//     int i,f=0,j,n,m;
//     printf("Enter 1st size: ");
//     scanf("%d",&n);
//     printf("Enter 1st array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter 2nd size: ");
//     scanf("%d",&m);
//     printf("Enter 2nd array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&b[i]);
//     }
//     int p=n+m;
//     for(i=0;i<n;i++)
//     {
//         c[i]=a[i];
//     }
//     for(j=0;j<m;j++)
//     {
//         c[i+j]=b[j];
//     }
//     printf("After adding\n");
//     for(i=0;i<p;i++)
//     {
//         printf("%d",c[i]);
//     }
//     for(i=0;i<p;i++)
//     {
//         for(j=0;j<i;j++)
//         {
//             if(c[j]==c[i])
//             {
//                 f=1;
//                 for(int k=j;k<p-1;k++)
//                 {
//                     c[k]=c[k+1];
//                 }
//                 p--;
//                 j--; 
//             } 
//         }
//     }
//     if(f==0)
//     {
//         printf("\nno duplicates");
//     }
//     else
//     {
//         printf("\nDuplicate");
//     }
//     printf("\n");
//     for(i=0;i<p;i++)
//     {
//         printf("%d",c[i]);
//     }
// }
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

//PROBLEM 2 INTERSECTION

// void main()
// {
//     int a[10],b[10],c[10],p=0,i,j,n,m;
//     printf("Enter 1st size: ");
//     scanf("%d",&n);
//     printf("Enter array: ");
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
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             if(a[i]==b[j])
//             {
//                 c[p]=a[i];
//                 p++;
//                 break;
//             }
//         }
//     }
//     for(i=0;i<p;i++)
//     {
//         printf("%d",c[i]);
//     }
// }

//PROBLEM 3

// void main()
// {
//     int a[10],n,i,j,s,k=3,sum=0;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Enter array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     i=0;j=k-1;
//     printf("Enter sum: ");
//     scanf("%d",&s);
//     while(i<j)
//     {
//         sum=0;
//         sum=a[i]+a[j-1]+a[j];
//         if(s==sum)
//         {
//             printf("%d,%d,%d",a[i],a[j-1],a[j]);
//             break;
//         }
//         i++;
//         j++;
//     }
// }

//PROBLEM 5
void main()
{
    int a[10],b[10],c[10],d[10];
    int n,i,j,k,m,u,p;
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
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter 3rd size: ");
    scanf("%d",&u);
    printf("Enter 3rd array: ");
    for(i=0;i<u;i++)
    {
        scanf("%d",&c[i]);
    }
    p=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            for(k=0;k<u;k++)
            {
                if(a[i]==b[i]==c[i])
                {
                    d[p]=a[i];
                    p++;
                    break;
                }
            }
        }
    }
    for(i=0;i<p;i++)
    {
        printf("%d",d[i]);
    }
}