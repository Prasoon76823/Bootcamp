#include<stdio.h>
void main()
{
    // PROBLEM 3
    
    int a=20,b=20,c=40,d;
    d=a>b?a>c?a:c:b>c?b:c;
    printf("largest:%d",d);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d",b);
        }
        else{
            printf("%d",c);
        }
    }

    //largest:4040
}