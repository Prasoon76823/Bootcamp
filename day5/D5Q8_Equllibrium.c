#inclue<stdio.h>
//PROBLEM 7

void main()
{
    int a[10],i,j,n,lsum,rsum;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        lsum=0;
        for(j=0;j<i;j++)
        {
            lsum=lsum+a[j];
        }
        rsum=0;
        for(j=i+1;j<n;j++)
        {
            rsum=rsum+a[j];
        }
        if(lsum==rsum)
        {
            printf("%d",i);
        }
    }
}