#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the range");
    scanf("%d",&n);
    for(i=2;i<=(2*n);i=i+2)
    {
        printf("%d \t",i);
        sum=sum+i;
    }
    printf("sum of even num is %d",sum);
}