//program for the area of rectangle//
#include<stdio.h>
int main()
{
    float l,b,area;
    printf("Enter the lenght of the rectangle");
    scanf("%f",&l);
    printf("Enter the breadth of the rectangle");
    scanf("%f",&b);
    area=l*b;
    printf("The area of the given rectangle is %f",area);
    return 0;
}