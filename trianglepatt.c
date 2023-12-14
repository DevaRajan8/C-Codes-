#include<stdio.h>
int main()
{
    int i,j,k,w,n=4;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(k=3;k>=n-i;k--)
        {
            printf(" ");
        }
        for(j=5;j>=(2*i)-1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
}