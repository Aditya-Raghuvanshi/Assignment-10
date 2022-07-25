/*Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/
#include<stdio.h>
int fact(int );
int comb(int ,int );
int main()
{
    int n,r;
    printf("enter the no. of items and no. of selected items at a time ");
    scanf("%d %d",&n,&r);
    printf("the no. of combinations are %d",comb(n,r));
    return 0;
}
int comb(int n,int r)
{
    return(fact(n)/(fact(n-r)*fact(r)));
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
