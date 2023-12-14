#include<stdio.h>
int main()
{
    int n,i,sum=0,m,j;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the number");
    scanf("%d",&m);
    j=1;
    for(i=m;i<=n;i++)
    {
        if(i%j==0)
        {
            printf("%d",i);
            sum=sum+i;
        }
        if(sum==j)
        {
            printf("perfect !");
        }
        else
        {
            printf("not !");
        }
       }
        printf("\nsum is %d ",sum);

    }
    