//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void prin_o_natural(int );
int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    prin_o_natural(n);
    return 0;
}
void prin_o_natural(int x)
{
    for(int i=1;i<=2*x-1;i++)
    {
        if((i%2)!=0)
           printf(" %d ",i);
    }
}
