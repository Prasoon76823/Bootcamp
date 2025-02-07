#include<stdio.h>
void main()
{
    //PROBLEM 6

    char ch;
    printf("Enter ch:");
    scanf("%c",&ch);
    if(ch>=65&&ch<=91||ch>=97&&ch<=123)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            printf("Character is vowel");
        }
        else{
            printf("Character is consonant");
        }
    }
    else{
        printf("it is not an alphabet");
    }
}