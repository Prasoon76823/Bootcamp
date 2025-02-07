#include<stdio.h>

//PROBLEM 5
// 
// void main()
// {
//     int n,a[10],temp1[10],temp2[10],temp3[10],d;
//     int i,j=0,k=0;
//     printf("Enter size : ");
//     scanf("%d",&n);
//     printf("Enter array: ");
//     //Enter array
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter d: ");
//     scanf("%d",&d);
//     //printing array for the first part
//     for(i=0;i<d;i++)
//     {
//         temp[i]=a[i];
//     }
//     printf("\n");
//     //reversing first part
//     for(i=d;i>=0;i--)
//     {
//         temp1[j]=a[i];
//         j++;
//     }
//     //printing first part after reversing
//     for(i=0;i<j;i++)
//     {
//         printf("%d",temp1[i]);
//     }
//     printf("\n");
//     //printing next part of array
//     for(i=d+1;i<n;i++)
//     {
//         printf("%d",a[i]);
//     }
//     printf("\n");
//     //reversing next part of array
//     for(i=n-1;i>=d+1;i--)
//     {
//         temp2[k]=a[i];
//         k++;
//     }
//     //printing next part after reversing
//     for(i=0;i<k;i++)
//     {
//         printf("%d",temp2[i]);
//     }
//     printf("\n");
//     //adding both part of array
//     printf("\n");
//     int n1=sizeof(temp1)/sizeof(temp1[0]);
//     int n2=sizeof(temp2)/sizeof(temp2[0]);
//     if(n1>=n2)
//     {
//         for(i=0;i<n1;i++)
//         {
//             temp3[i]=temp1[i]+temp2[i];
//         }
//     }
//     else
//     {
//         for(i=0;i<n2;i++)
//         {
//             temp3[i]=temp1[i]+temp2[i];
//         }
//     }
//     //printing array after adding
//     if(n1>n2)
//     {
//         for(i=0;i<n1;i++)
//         {
//             printf("%d",temp3[i]);
//         }
//     }
//     else
//     {
//         for(i=0;i<n2;i++)
//         {
//             printf("%d",temp3[i]);
//         }
//     }
//     printf("\n");
//     for(i=n;i>=0;i--)   
//     {
//         printf("%d",temp3[i]);
//     }
// }
//*************************************************************** 
// void main()
// {
//     int i,d,n,a[10];
//     printf("Entre size:");
//     scanf("%d",&n);
//     printf("Enter array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",a[i]);
//     }
//     printf("Enter d:");
//     scanf("%d",&d);
//     for(i=0;i<d;i++)
//     {
//         int j,first;
//         first=a[0];
//         for(j=0;j<n;j++)
//         {
//             a[j]=a[j+1];
//         }
//         a[j]=first;
//     }
//     printf("\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d",a[i]);
//     }
// }