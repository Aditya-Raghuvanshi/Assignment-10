/*Write a function to check whether a given number contains a given digit or not.
(TSRS)*/
#include<stdio.h>

int main()
{
    int m,n;
    printf("enter the any no. and also the digit you want to search ");
    scanf("%d %d",&m,&n);
    if(search(m,n))
        printf("the no. is found ");
    else
        printf("the no. is Not found ");
    return 0;
}
int search(int x,int y)
{
    int a;
    for(int i=x;i!=0;)
    {
        a=i%10;
        if(y==a)
            return(1);
        i=i/10;
    }
    return(0);

}
