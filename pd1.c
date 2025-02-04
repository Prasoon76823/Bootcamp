#include<stdio.h>
#include<math.h>
void main()
{
    //PROBLEM 1

    // for(0;1;0)
    // {
    //     printf("h");
    // }
    
    //infinity

    // PROBLEM 2

    // int a,i;
    // a=12>2?printf("mca")&&printf("glb")||printf("ctm"):printf("itm");

    //mcaglb......a=1

    //PROBLEM 3
    
    // int a=20,b=20,c=40,d;
    // d=a>b?a>c?a:c:b>c?b:c;
    // printf("largest:%d",d);

    // if(a>b)
    // {
    //     if(a>c)
    //     {
    //         printf("%d",a);
    //     }
    //     else
    //     {
    //         printf("%d",c);
    //     }
    // }
    // else
    // {
    //     if(b>c)
    //     {
    //         printf("%d",b);
    //     }
    //     else{
    //         printf("%d",c);
    //     }
    // }

    //largest:4040

    //PROBLEM 4

    // int year;
    // printf("Enter year:");
    // scanf("%d",&year);
    // if(year%4==0||year%100!=0&&year%400==0)
    // {
    //     printf("year is laep year");
    // }
    // else{
    //     printf("year is not a leap year");
    // }

    //PROBLEM 5

    // int n;
    // printf("Enter n:");
    // scanf("%d",&n);
    // if(n==0)
    // {
    //     printf("n is 0");
    // }
    // else if(n>0)
    // {
    //     printf("n is positive");
    // }
    // else{
    //     printf("n is negative");
    // }

    //PROBLEM 6

    // char ch;
    // printf("Enter ch:");
    // scanf("%c",&ch);
    // if(ch>=65&&ch<=91||ch>=97&&ch<=123)
    // {
    //     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    //     {
    //         printf("Character is vowel");
    //     }
    //     else{
    //         printf("Character is consonant");
    //     }
    // }
    // else{
    //     printf("it is not an alphabet");
    // }
    
    //PROBLEM 7

    // int a1,a2,a3,sum,a,b,c;
    // printf("Enter angles a1,a2,a3:");
    // scanf("%d%d%d",&a1,&a2,&a2);
    // printf("Enter sides a,b,c:");
    // scanf("%d%d%d",&a,&b,&c);
    // if(a1>0 && a2>0 && a3>0 && a>0 && b>0 && c>0)
    // {
    //     sum=a1+a2+a3;
    //     if(sum==180||(a+b>c&&b+c>a&&a+c>b))
    //     {
    //         printf("it is a triangle");
    //     }
    //     else
    //     {
    //         printf("it is not a traingle");
    //     }
    // }

    //PROBLEM 8

    // char ch;
    // printf("Enter character:");
    // scanf("%c",&ch);
    // 
    //     switch (ch)
    //     {
    //         case 'a':
    //         printf("Vowel");
    //         case 'e':
    //         printf("vowel");
    //         case 'i':
    //         printf("Vowel");
    //         case 'o':
    //         printf("vowel");
    //         case 'u':
    //         printf("Vowel");
    //         case 'A':
    //         printf("vowel");
    //         case 'E':
    //         printf("Vowel");
    //         case 'I':
    //         printf("vowel");
    //         case 'O':
    //         printf("Vowel");
    //         case 'U':
    //         printf("vowel");
    //         default:
    //         printf("not vowel");
    //         break;
    //     }
    // }

    //PROBLEM 9

    // int n=10,sum=0;
    // for(int i=1;i<=n;i++)
    // {
    //     sum=sum+i;
    // }
    // printf("Sum =%d",sum);

    //sum=55

    //PROBLEM 10

    // int n;
    // float kg;
    // printf("Enter n in cm:");
    // scanf("%d",&n);
    // int m=100*n;
    // printf("cm in m :%d",m);
    // printf("\nEnter kg:");
    // scanf("%f",&kg);
    // float g=n*0.001;
    // printf("kg in g: %f",g);

    //PROBLEM 11

    // int n=123,count=0,sum=0;
    // while(n!=0)
    // {
    //     int r=n%10;
    //     count=count+1;
    //     sum=sum+r;
    //     n=n/10;
    // }
    // printf("%d",count);
    // printf("\nSum=%d",sum);

    //3

    //PROBLEM 12

    // int n=111,rev=0;
    // int m=n;
    // while(n!=0)
    // {
    //     int r=n%10;
    //     rev=rev*10+r;
    //     n=n/10;
    // }
    // printf("Reverse: %d",rev);
    // if(rev==m)
    // {
    //     printf("\nNo. is pallindrome");
    // } 
    // else
    // {
    //     printf("\nNo. is not pallindrome");
    // }

    //PROBLEM 13

    // int n=153,d=0,sum=1,r;
    // int m=n;
    // int t=m;
    // while(n!=0)
    // {
    //     d=d+1;
    //     n=n/10;
    // }
    // printf("d= %d",d);
    // printf("m:%d",m);
    // while(m!=0)
    // {
    //     r=m%10;
    //     m=m/10;
    //     sum=sum+pow(r,d);
    // }
    // printf("\nsum=%d",sum);

    // if(sum==t)
    // {
    //     printf("\nNo. is armstrong");
    // }
    // else
    // {
    //     printf("\nNo. is not armstrong");
    // }

    //PROBLEM 14

    // int n=5,fact=1;
    // for(int i=1;i<=n;i++)
    // {
    //     fact=fact*i;
    // }
    // printf("fact=%d",fact);

    //PROBLEM 15

    // int n=145,i,fact,sum=0,r;
    // int m=n;
    // while(n!=0)
    // {
    //     r=n%10;
    //     fact=1;
    //     for(i=1;i<=r;i++)
    //     {
    //         fact=fact*i;
    //     }
        
    //     n=n/10;
    //     sum=sum+fact;
        
    // }

    // printf("\nSum= %d",sum);
    // if(sum==m)
    // {
    //     printf("\nno. is strong");
    // }
    // else
    // {
    //     printf("\nno. is not strong");
    // }

    //Sum= 145
    //no. is strong

    //PROBLEM 16

    // int a=10,b=3,pow=1;
    // for(int i=1;i<=b;i++)
    // {
    //     pow=pow*a;
    // }
    // printf("power:%d",pow);

    //1000

    //PROBLEM 17

    int n=5467;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        
    }
}