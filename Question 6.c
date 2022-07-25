//Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact(int );
int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    printf("factorial of the given no. is %d",fact(n));
    return 0;
}
int fact(int x)
{
    int m=1;
    for(int i=x;i>=1;i--)
    {
        m=m*i;
    }
    return(m);
}
