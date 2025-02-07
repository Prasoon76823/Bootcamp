#include<stdio.h>
//PROBLEM 11

//****************************Using function******************************* 
void reverse()
{
    int i=0,j;
    char c[]="hello";
    char temp;
    while(c[i]!='\0')
    {
        i++;
    }
    j=i-1;
    i=0;
    while(i<j)
    {
        temp=c[i];
        c[i]=c[j];
        c[j]=temp;
        i++;
        j--;
    }
    printf("reverse: %s",c);
}
void main()
{
    reverse();
}

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
