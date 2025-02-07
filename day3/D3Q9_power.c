#include<stdio.h>
//PROBLEM 8
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