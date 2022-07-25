/*Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/
#include<stdio.h>
int e_or_o(int );
int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    printf("%d",e_or_o(n));
    return 0;
}
int e_or_o(int x)
{
    if(x%2==0)
        return(1);
    else
        return(0);
}
