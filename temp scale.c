//Fahrenheit to centigrade//
#include<stdio.h>
int main()
{
    float f,c,num1,num2;
    printf("Enter the temp. in Fehrenheit");
    scanf("%f/n",&f);
    num1=5.0/9.0;
    num2=f-32;
    c=num1*num2;
    printf("The temp in centigrade is %f",c);
    return 0;
}