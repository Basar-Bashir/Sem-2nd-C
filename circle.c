//program for the circumfrence and area of circle//
#include<stdio.h>
int main()
{
    float p,a,r;
    printf("Enter the radius of circle");
    scanf("%f",&r);
    p=2*3.14*r;
    a=3.14*r*r;
    printf("The circumfrence of given circle is %f",p);
    printf("The area of given circle is %f",a);
     return 0;
}
