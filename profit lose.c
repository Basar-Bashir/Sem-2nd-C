//program for calculating profit and lose//
#include<stdio.h>
int main()
{
    float sp,cp,num;
    printf("\nEnter the selling price: ");
    scanf("%f",&sp);
    printf("\nEnter the cost price: ");
    scanf("%f",&cp);
    num=sp-cp;
    if(sp>cp)
    {printf("\nthe profit is: %f",num);}
    else
    {printf("\nthe lose is: %f",num);}
    return 0; 
}