#include<stdio.h>

//PROBLEM 1

void main()
{
    int n,a[10],i;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count1=0;
    int count2=0;
    int count3=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            count1=count1+1;
        }
        else if(a[i]==1)
        {
            count2=count2+1;
        }
        else
        {
            count3=count3+1;
        }
    }
    for(i=0;i<count1;i++)
    {
        printf("0");
    }
    for(i=0;i<count2;i++)
    {
        printf("1");
    }
    for(i=0;i<count3;i++)
    {
        printf("2");
    }
}

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







