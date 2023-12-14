#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,ispalindrome=1;
    char str[50];
    printf("enter the string");
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
         if(str[i]!=str[n-i-1])
           {
            ispalindrome=0;
            break;
           }
    }
    if(ispalindrome==1)
    {
        printf("%s is a palindrome",str);
    }
    else
    {
        printf("%s is not a palindrome",str);
    }
}