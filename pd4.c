#include<stdio.h>

//PROBLEM 1
// void main()
// {
//     int a[5],secondlarge,large=0,i;
//     printf("Enter array:");
//     for(i=1;i<=5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<5;i++)
//     {
//         if(large<a[i])
//         {
//             secondlarge=large;
//             large=a[i];
//         }
//         else if(a[i]>secondlarge && a[i]!=large)
//         {
//             secondlarge=a[i];
//         }
//     }
//     printf("second large : %d",secondlarge);
// }

//PROBLEM 2

// void main()
// {
//     int a[5],f=0;
//     printf("Enter array: ");
//     for(int i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<5;i++)
//     {
//         if(a[i]<a[i+1])
//         {
//             f=0;
//         }
//         else
//         {
//             f=1;
//         }
//     }
//     if(f==0)
//     {
//         printf("Array sorted");
//     }
//     else
//     {
//         printf("Not sorted");
//     }
// }

//PROBLEM 3

// void main()
// {
//     int a[5],i;
//     printf("Enter array:");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=4;i>=0;i--)
//     {
//         printf("%d",a[i]);
//     } 
// }

//PROBLEM 4

void main()
{
    int a[10],i,f=0,j,n;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]==a[i])
            {
                f=1;
                for(int k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--; 
            }
        }
    }
    if(f==0)
    {
        printf("no duplicates");
    }
    else
    {
        printf("Dupliacte");
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

//PROBLEM 5
// int swap(int a,int b)
// {
//    int temp=a;
//    a=b;
//    b=temp;

// }
// int rotate(int a[10],int d,int n)
// {
//     reverse(a,0,d-1);
//     reverse(a,d,n-1);
//     reverse(a,0,n-1);
//     return reverse;

// }
// int reverse(int arr[],int low ,int high){
//     while(low<high){
//         swap(arr[low],arr[high]);
//         low++;
//         high--;
//     }
//     return reverse;
// }
// void main()
// {
//     int a[10],i,d,n;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Enter array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter d: ");
//     scanf("%d",&d);
//     int c=rotate(a,n,d);
//     for(i=0;i<n;i++)
//     {
//         printf("%d",c);
//     }
// }

//************************************************************* 

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

//PROBLEM 6
// void main()
// {
//     int n,i,a[10],temp;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Enter array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int j=0;
//     for(i=0;i<n;i++)
//     {
//         if(a[i]!=0)
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

//PROBLEM 7

// void main()
// {
//     int a[10],n,i,j,f=0;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Enter array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         f=0;
//         for(j=i+1;j<n;j++)
//         {
//             if(a[i]<a[j])
//             {
//                 f=1;
//                 break;
//             }
//         }
//         if(f==0)
//         {
//             printf("%d",a[i]);
//         }
//     }
// }

//PROBLEM 8

// void main()
// {
//     int a[10],n,i,max=0,min;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Enter array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     min=a[0];
//     for(i=0;i<n;i++)
//     {
//         if(a[i]>max)
//         {
//             max=a[i];
//         }
//         else if(a[i]<min)
//         {
//             min=a[i];
//         }
//     }
//     printf("\nMaximum element: %d",max);
//     printf("\nMinimum element: %d",min);
//     int diff=max-min;
//     printf("\nMaximum difference: %d",diff);
// }

//PROBLEM 9
// void main()
// {
//     int a[10],n,i,target;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     printf("Enter array: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter target element: ");
//     scanf("%d",&target);
//     int count=0;
//     for(i=0;i<n;i++)
//     {
//         if(a[i]==target)
//         {
//             count=count+1;
//         }
//     }
//     printf("Frequency: %d",count);
// }