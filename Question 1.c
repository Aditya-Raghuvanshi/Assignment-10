//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>

void area(float );
int main()
{
    float r;
    printf("Enter radius of the circle ");
    scanf("%f",&r);
    area(r);
    return 0;
}
void area(float a)
{
    printf("area of the circle is %f ",3.14*a*a);
}
