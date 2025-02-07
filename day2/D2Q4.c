#include<stdio.h>
void main()
{
    //PROBLEM 4

    int year;
    printf("Enter year:");
    scanf("%d",&year);
    if(year%4==0||year%100!=0&&year%400==0)
    {
        printf("year is laep year");
    }
    else{
        printf("year is not a leap year");
    }
}