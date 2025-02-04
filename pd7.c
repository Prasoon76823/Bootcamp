#include<stdio.h>

//PROBLEM 1

// void main()
// {
//     int n,k;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     printf("Enter k: ");
//     scanf("%d",&k); 
//     if(n&(1<<k))
//     {
//         printf("true");
//     }
//     else
//     {
//         printf("False");
//     }
// }
//n=21 k=2 true
//PROBLEM 2

// void main()
// {
//     int n,count=0,k,cnt=0;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(int  i=0;i<5;i++)
//     {
//         if(n&(1<<i))
//     {
//         count++;
//     }
//     }
//     printf("Count: %d",count);
// }
//n=21 count=3

//PROBLEM 3

// void main()
// {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     while(n>0)
//     {
//         if((n&(n-1)))
//         {
//             printf("not Power of 2");
//             break;
//         }
//         else
//         {
//             printf("Power of 2");
//             break;
//         }
//     }
// }
//n=4 power of 2

//PROBLEM 4
//n^n=0.......n^0=n

// void main()
// {
//     int a[10],i,n,count=0,counto=0,ans;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Entre array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         if(a[i]%2==0)
//         {
//             count++;
//         }
//         else
//         {
//             counto++;
//         }
//     }
//     printf("%d",counto);

// }

// void main()
// {
//     int a[10],i,n,count=0,ans;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Entre array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//************************using ^gate*********************************
//     for(i=0;i<n;i++)
//     {
//         ans=ans^a[i];
//     }
//     printf("%d",ans);
//***********************using loop***********************************
//     for(i=0;i<n;i++)
//     {
//         count=0;
//         for(int j=0;j<i;j++)
//         {
//             if(a[i]==a[j])
//             {
//                 count++;
//             }
//         }
//         if(count%2!=0)
//         {
//             printf("%d",a[i]);
//             break;
//         }
//     }
// }

