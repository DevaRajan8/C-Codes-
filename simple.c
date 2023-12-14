#include<stdio.h>
int main()
{
    int n,d1,d2,d3,a,t;
    printf("enter the number");
    scanf("%d",&n);
    d1=n%10;
    a=n/10;
    d2=a%10;
    d3=a/10;
    t=(d3*d3*d3)+(d2*d2*d2)+(d1*d1*d1);
    if(t==n)
    {
        printf("%d is arm strong",n);
    }
    else
    {
        printf("%d is not a arm strong",n);
    }
}