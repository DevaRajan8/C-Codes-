#include<stdio.h>
int main()
{
     int i,n,j,a;
     printf("enter the range");
     scanf("%d",&n);
     a=1;
     for(i=1;i<=n;i++)
     {
          for(j=1;j<=i;j++)
          {
               printf("%d ",a);
               a++;
          }
          printf("\n");
     }
}
