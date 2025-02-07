#include<stdio.h>
void main()
{
    // PROBLEM 8

    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    
        switch (ch)
        {
            case 'a':
            printf("Vowel");
            case 'e':
            printf("vowel");
            case 'i':
            printf("Vowel");
            case 'o':
            printf("vowel");
            case 'u':
            printf("Vowel");
            case 'A':
            printf("vowel");
            case 'E':
            printf("Vowel");
            case 'I':
            printf("vowel");
            case 'O':
            printf("Vowel");
            case 'U':
            printf("vowel");
            default:
            printf("not vowel");
            break;
        }
    

}