/*Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)*/
#include<stdio.h>
int fact(int );
int arrang(int ,int );
int main()
{
    int n,r;
    printf("enter the no. of items and no. of selected items at a time ");
    scanf("%d %d",&n,&r);
    printf("the no. of arrangements are %d",arrang(n,r));
    return 0;
}
int arrang(int n,int r)
{
    return(fact(n)/fact(n-r));
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
