//Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void prin_natural(int );
int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    prin_natural(n);
    return 0;
}
void prin_natural(int x)
{
    for(int i=1;i<=x;i++)
    {
        printf(" %d ",i);
    }
}
