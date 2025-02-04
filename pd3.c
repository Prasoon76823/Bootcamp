#include<stdio.h>
#include<string.h>
//PROBLEM 1

//*************************Using recursion********************************** 
// int fact(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     else if(n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return(n*fact(n-1));
//     }
// }
// void main()
// {
//     int n=5;
//     printf("fact=%d",fact(n));
// }

//fact=120

//*****************With function************************** 

// int fact(int n)
// {
//     int fact=1,i;
//     for(i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }
// void main()
// {
//     int n=5;
//     printf("fact: %d",fact(n));
// }

//fact=120
//********************************************************************* 
//PROBLEM 2,4

// int fib(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     else if(n==1)
//     {
//         return 1;
//     }
//     else{
//         return(fib(n-1)+fib(n-2));
//     }
    
// }
// void main()
// {
//     int n=5,a[100];
//     printf("Fibonacci series\n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d",fib(i));
//     }
//     printf("\nArray of Fibonnaci\n");
//     for(int i=0;i<n;i++)
//     {
//         a[i+1]=fib(i);
//         printf("%d",a[i+1]);
//     }
//     printf("\nnth term: %d",a[n]);
    
// }

//01123
//**************************************************************** 
//PROBLEM 3

// int sum(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     else if( n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return(n+sum(n-1));
//     }
// }
// void main()
// {
//     int n=5;
//     printf("sum : %d",sum(n));
// }

//sum : 15 
//****************************************************************** 
//PROBLEM 5

// void number(int n)
// {
//     int i;
//     for(i=1;i<=n;i++)
//     {
//         printf("%d",i);
//     }
// }
// void main()
// {
//     int n=10;
//     number(n);
// }

//12345678910
//*********************************************************************** 
//PROBLEM 6
// void sumd(int n)
// {
//     int sum=0,r;
//     while(n!=0)
//     {
//         r=n%10;
//         sum=sum+r;
//         n=n/10;
//     }
//     printf("Sum: %d",sum);
// }
// void main()
// {
//     int n=123;
//     sumd(n);
// }
//********************************************************************** 
//PROBLEM 8

// void digit(int n)
// {
//     int j=n;
//     for(int i=1;i<=n;i++)
//     {
//         printf("%d",j);
//         j--;
//     }

// }  
// void main()
// {
//     int n=5;
//     digit(n);
// }

//54321

//PROBLEM 9
//***********************Using recursion****************************** 
int power(int n,int m)
{
    if(m!=0)
    {
        return(n*power(n,m-1));
    }
    else
    {
        return 1;
    }
}
void main()
{
    int n,m,result;
    printf("Enter n,m:");
    scanf("%d%d",&n,&m);
    result=power(n,m);
    printf("power:%d",result);
}

//***********************With function**************************** 
// void power(int n)
// {
//     int i,pow=1;
//     for(i=1;i<=n;i++)
//     {
//         pow=pow*2;
//     }
//     printf("power:%d",pow);
// }
// void main()
// {
//     int n=5;
//     power(n);
// }

//power:32
//*********************************************************************
//PROBLEM 10

// int ndigit(int n)
// {
//     static int count=0;
//     if(n>0)
//     {
//         count++;;
//         ndigit(n/10);
//     }
//     return count;
// }
// void main()
// {
//     int n=123;
//     int count=ndigit(n);
//     printf(" No. of digit: %d",count);
// }

//No. of digit: 3

//PROBLEM 11

//****************************Using function******************************* 
// void reverse()
// {
//     int i=0,j;
//     char c[]="hello";
//     char temp;
//     while(c[i]!='\0')
//     {
//         i++;
//     }
//     j=i-1;
//     i=0;
//     while(i<j)
//     {
//         temp=c[i];
//         c[i]=c[j];
//         c[j]=temp;
//         i++;
//         j--;
//     }
//     printf("reverse: %s",c);
// }
// void main()
// {
//     reverse();
// }

//********************************Using recursion******************************* 
// void reverse() 
// {
//     char c;
//     scanf("%c", &c);
//     char t=c;
//     if (c != '\n') {
//         reverse();
//         printf("%c", c);
//     }

// }
// void main() 
// {
//     printf("Enter string: ");
//     reverse();
// }

//************************************************************************ 
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
// int binary(int a[],int beg,int end,int n)
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
//         return(a,beg,mid-1,n);
//     }
//     else
//     {
//         return(a,mid+1,end,n);
//     }
// }
// void main()
// {
//     int n,c,i=0;
//     int a[]={1,2,3,4,5};
//     printf("Enter element to search: ");
//     scanf("%d",&n);
//     c=binary(a,0,4,n);
//     if(c!=-1)
//     {
//         printf("element found");
//     }
//     else
//     {
//         printf("Element not found");
//     }
// }