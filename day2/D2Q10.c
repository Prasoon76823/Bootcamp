#include<stdio.h>
void main()
{
    //PROBLEM 10

    int n;
    float kg;
    printf("Enter n in cm:");
    scanf("%d",&n);
    int m=100*n;
    printf("cm in m :%d",m);
    printf("\nEnter kg:");
    scanf("%f",&kg);
    float g=n*0.001;
    printf("kg in g: %f",g);
}