//Write a function to calculate simple interest. (TSRS)
#include<stdio.h>

float simple_int(int,int,int );
int main()
{
    int p,r,t;
    printf("Enter principle interest , rate of interest and time ");
    scanf("%d %d %d",&p,&r,&t);
    printf("so the simple interest for %d year  is %f",t,simple_int(p,r,t));
    return 0;
}
float simple_int(int a,int b,int c)
{
    float SI;
    SI=(a*b*c)/100.0;
    return(SI);
}
